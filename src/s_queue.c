#include <stdio.h>
#include <stdlib.h>

#include "s_list.h"
#include "s_macro.h"
#include "s_queue.h"

SQueue *s_queue_create(void)
{
    SQueue *que = NULL;
    que = (SQueue *)calloc(1, sizeof(SQueue));

    return que;
}

void s_queue_destroy(SQueue *queue)
{
    if S_UNLIKELY (queue == NULL)
        return;

    if S_UNLIKELY (queue->head == NULL)
        return;
    s_list_free(queue->head);

    free(queue);
    queue = NULL;
}

void s_queue_push(SQueue *queue, spointer data)
{
    if S_UNLIKELY (queue == NULL)
        return;

    queue->tail = s_list_append(queue->tail, data);
    if (queue->tail->next)
        queue->tail = queue->tail->next;
    else
        queue->head = queue->tail;
    queue->length++;
}

spointer s_queue_pop(SQueue *queue)
{
    SList *node;
    spointer data;

    if S_UNLIKELY (queue == NULL)
        return NULL;

    if (queue->head) {
        node = queue->head;
        data = node->data;
        queue->head = node->next;

        if (queue->head)
            queue->head->pre = NULL;
        else
            queue->tail = NULL;
        s_list_free(node);

        queue->length--;

        return data;
    }

    return NULL;
}

SList *s_queue_peek_tail_link(SQueue *queue)
{
    if S_UNLIKELY (queue == NULL)
        return NULL;

    return queue->tail;
}

SList *s_queue_peek_head_link(SQueue *queue)
{
    if S_UNLIKELY (queue == NULL)
        return NULL;

    return queue->head;
}

int s_queue_get_length(SQueue *queue)
{
	if S_UNLIKELY (queue == NULL)
		return -1;

	return queue->length;
}

void s_queue_init(SQueue *queue)
{
    if (queue == NULL)
        return;

    queue->head = queue->tail = NULL;
    queue->length = 0;
}

void s_queue_clear(SQueue *queue)
{
    if (queue == NULL)
        return;

    s_list_free(queue->head);
    s_queue_init(queue);
}
