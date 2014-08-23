/*
 * nghttp2 - HTTP/2 C Library
 *
 * Copyright (c) 2014 Tatsuhiro Tsujikawa
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#include "nghttp2_callbacks.h"

#include <stdlib.h>

int nghttp2_session_callbacks_new(nghttp2_session_callbacks **callbacks_ptr)
{
  *callbacks_ptr = calloc(1, sizeof(nghttp2_session_callbacks));

  if(*callbacks_ptr == NULL) {
    return NGHTTP2_ERR_NOMEM;
  }

  return 0;
}

void nghttp2_session_callbacks_del(nghttp2_session_callbacks *callbacks)
{
  free(callbacks);
}

void nghttp2_session_callbacks_set_send_callback
(nghttp2_session_callbacks *cbs, nghttp2_send_callback send_callback)
{
  cbs->send_callback = send_callback;
}

void nghttp2_session_callbacks_set_recv_callback
(nghttp2_session_callbacks *cbs, nghttp2_recv_callback recv_callback)
{
  cbs->recv_callback = recv_callback;
}

void nghttp2_session_callbacks_set_on_frame_recv_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_frame_recv_callback on_frame_recv_callback)
{
  cbs->on_frame_recv_callback = on_frame_recv_callback;
}

void nghttp2_session_callbacks_set_on_invalid_frame_recv_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_invalid_frame_recv_callback on_invalid_frame_recv_callback)
{
  cbs->on_invalid_frame_recv_callback = on_invalid_frame_recv_callback;
}

void nghttp2_session_callbacks_set_on_data_chunk_recv_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_data_chunk_recv_callback on_data_chunk_recv_callback)
{
  cbs->on_data_chunk_recv_callback = on_data_chunk_recv_callback;
}

void nghttp2_session_callbacks_set_before_frame_send_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_before_frame_send_callback before_frame_send_callback)
{
  cbs->before_frame_send_callback = before_frame_send_callback;
}

void nghttp2_session_callbacks_set_on_frame_send_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_frame_send_callback on_frame_send_callback)
{
  cbs->on_frame_send_callback = on_frame_send_callback;
}

void nghttp2_session_callbacks_set_on_frame_not_send_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_frame_not_send_callback on_frame_not_send_callback)
{
  cbs->on_frame_not_send_callback = on_frame_not_send_callback;
}

void nghttp2_session_callbacks_set_on_stream_close_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_stream_close_callback on_stream_close_callback)
{
  cbs->on_stream_close_callback = on_stream_close_callback;
}

void nghttp2_session_callbacks_set_on_unknown_frame_recv_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_unknown_frame_recv_callback on_unknown_frame_recv_callback)
{
  cbs->on_unknown_frame_recv_callback = on_unknown_frame_recv_callback;
}

void nghttp2_session_callbacks_set_on_begin_headers_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_begin_headers_callback on_begin_headers_callback)
{
  cbs->on_begin_headers_callback = on_begin_headers_callback;
}

void nghttp2_session_callbacks_set_on_header_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_on_header_callback on_header_callback)
{
  cbs->on_header_callback = on_header_callback;
}

void nghttp2_session_callbacks_set_select_padding_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_select_padding_callback select_padding_callback)
{
  cbs->select_padding_callback = select_padding_callback;
}

void nghttp2_session_callbacks_set_data_source_read_length_callback
(nghttp2_session_callbacks *cbs,
 nghttp2_data_source_read_length_callback data_source_read_length_callback)
{
  cbs->read_length_callback = data_source_read_length_callback;
}