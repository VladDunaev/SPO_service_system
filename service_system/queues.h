///Заголовочный файл описывающий очереди заявок

#pragma once
#include "request.h"


/**
 * Инициализация очередей
 */
void initial_queues();

/**
 * Освобождние памяти использованной для формирования очередей
 */
void finalize_queues();

/**
 * Добавить заявку в очереди
 * Заявка добавляем в очередь с наименьшим числом заявок
 * @param new_request Добавляемая заявка
 */
void add_to_queue(request*& new_request);