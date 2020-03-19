// This file intentionally does not have header guards. It is intended to be
// included multiple times, each time with a different definition of
// QUICHE_FLAG.

// NOLINT(namespace-envoy)

// This file is part of the QUICHE platform implementation, and is not to be
// consumed or referenced directly by other Envoy code. It serves purely as a
// porting layer for QUICHE.

// This file is generated by //third_party/quic/tools:quic_flags_list in
// Google3.

#if defined(QUICHE_FLAG)

QUICHE_FLAG(bool, http2_reloadable_flag_http2_add_backend_ping_manager, false,
            "If true, SpdyBackendDispatcher will instantiate and use a PeriodicPingManager for "
            "handling PING logic.")

QUICHE_FLAG(
    bool, http2_reloadable_flag_http2_backend_alpn_failure_error_code, false,
    "If true, the GFE will return a new ResponseCodeDetails error when ALPN to the backend fails.")

QUICHE_FLAG(bool, http2_reloadable_flag_http2_refactor_client_ping_rtt, true,
            "If true, logic for coordinating RTT PINGs moves from "
            "SpdyClientDispatcher::PingManager into SpdyClientDispatcher proper. No expected "
            "functional change, but protected out of an abundance of caution.")

QUICHE_FLAG(bool, http2_reloadable_flag_http2_security_requirement_for_client3, false,
            "If true, check whether client meets security requirements during SSL handshake. If "
            "flag is true and client does not meet security requirements, do not negotiate HTTP/2 "
            "with client or terminate the session with SPDY_INADEQUATE_SECURITY if HTTP/2 is "
            "already negotiated. The spec contains both cipher and TLS version requirements.")

QUICHE_FLAG(
    bool, http2_reloadable_flag_http2_skip_querying_entry_buffer_error, false,
    "If true, do not query entry_buffer_.error_detected() in HpackDecoder::error_detected().")

QUICHE_FLAG(
    bool, http2_reloadable_flag_http2_support_periodic_ping_manager_cbs, false,
    "If true, PeriodicPingManager will invoke user-provided callbacks on receiving PING acks.")

QUICHE_FLAG(
    bool, http2_reloadable_flag_http2_use_settings_rtt_in_ping_manager, false,
    "If true along with --gfe2_reloadable_flag_http2_add_backend_ping_manager, SpdyDispatcher will "
    "bootstrap its PingManager RTT with the RTT determined from the initial SETTINGS<-->ack.")

QUICHE_FLAG(bool, quic_reloadable_flag_advertise_quic_for_https_for_debugips, false, "")

QUICHE_FLAG(bool, quic_reloadable_flag_advertise_quic_for_https_for_external_users, false, "")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_ack_delay_alarm_granularity, false,
            "When true, ensure the ACK delay is never less than the alarm granularity when ACK "
            "decimation is enabled.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_allow_backend_set_stream_ttl, false,
            "If true, check backend response header for X-Response-Ttl. If it is provided, the "
            "stream TTL is set. A QUIC stream will be immediately canceled when tries to write "
            "data if this TTL expired.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_allow_client_enabled_bbr_v2, true,
            "If true, allow client to enable BBRv2 on server via connection option 'B2ON'.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_alpn_dispatch, false,
            "Support different QUIC sessions, as indicated by ALPN. Used for QBONE.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_arm_pto_with_earliest_sent_time, false,
            "If true, arm the 1st PTO with earliest in flight sent time.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_avoid_overestimate_bandwidth_with_aggregation, false,
            "If true, fix QUIC bandwidth sampler to avoid over estimating bandwidth in the "
            "presence of ack aggregation.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_batch_writer_flush_after_mtu_probe, true,
    "If true and batch writer is used, QuicConnection will flush after a mtu probe is sent.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr2_add_ack_height_to_queueing_threshold, false,
            "If true, QUIC BBRv2 to take ack height into account when calculating "
            "queuing_threshold in PROBE_UP.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr2_avoid_unnecessary_probe_rtt, false,
            "If true, QUIC BBRv2 to avoid unnecessary PROBE_RTTs after quiescence.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_donot_inject_bandwidth, true,
            "If true, do not inject bandwidth in BbrSender::AdjustNetworkParameters.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_fix_pacing_rate, true,
            "If true, re-calculate pacing rate when cwnd gets bootstrapped.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_flexible_app_limited, false,
            "When true and the BBR9 connection option is present, BBR only considers bandwidth "
            "samples app-limited if they're not filling the pipe.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_mitigate_overly_large_bandwidth_sample, true,
            "If true, when cwnd gets bootstrapped and causing badly overshoot, reset cwnd and "
            "pacing rate based on measured bw.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_no_bytes_acked_in_startup_recovery, false,
            "When in STARTUP and recovery, do not add bytes_acked to QUIC BBR's CWND in "
            "CalculateCongestionWindow()")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_one_mss_conservation, false,
            "When true, ensure BBR allows at least one MSS to be sent in response to an ACK in "
            "packet conservation.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bbr_startup_rate_reduction, false,
            "When true, enables the BBS4 and BBS5 connection options, which reduce BBR's pacing "
            "rate in STARTUP as more losses occur as a fraction of CWND.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_better_mtu_packet_check, true,
            "If true, QuicConnection will check MTU_DISCOVERY_FRAME in nonretransmittable_frames "
            "to see if a packet is a MTU probe.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_bundle_retransmittable_with_pto_ack, false,
            "When the EACK connection option is sent by the client, an ack-eliciting frame is "
            "bundled with ACKs sent after the PTO fires.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_check_handshake_timeout_before_idle_timeout, true,
            "If true, QuicConnection will check handshake timeout before idle timeout.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_conservative_bursts, false,
            "If true, set burst token to 2 in cwnd bootstrapping experiment.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_conservative_cwnd_and_pacing_gains, false,
            "If true, uses conservative cwnd gain and pacing gain when cwnd gets bootstrapped.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_debug_wrong_qos, false,
            "If true, consider getting QoS after stream has been detached as GFE bug.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_default_to_bbr, true,
            "When true, defaults to BBR congestion control instead of Cubic.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_default_to_bbr_v2, false,
            "If true, use BBRv2 as the default congestion controller. Takes precedence over "
            "--quic_default_to_bbr.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_disable_version_q043, false,
            "If true, disable QUIC version Q043.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_disable_version_q046, false,
            "If true, disable QUIC version Q046.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_disable_version_q048, false,
            "If true, disable QUIC version Q048.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_disable_version_q049, false,
            "If true, disable QUIC version Q049.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_disable_version_q050, false,
            "If true, disable QUIC version Q050.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_do_not_accept_stop_waiting, false,
    "In v44 and above, where STOP_WAITING is never sent, close the connection if it's received.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_donot_dispatch_data_when_disconnected, true,
            "If true, do not dispatch data if connection disconnected.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_donot_reset_ideal_next_packet_send_time, false,
            "If true, stop resetting ideal_next_packet_send_time_ in pacing sender.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_enable_ack_decimation, true,
            "Default enables QUIC ack decimation and adds a connection option to disable it.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_enable_pcc3, false,
            "If true, enable experiment for testing PCC congestion-control.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_enable_version_draft_25_v3, false,
            "If true, enable QUIC version h3-25.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_enable_version_draft_27, false,
            "If true, enable QUIC version h3-27.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_enable_version_t050, false,
            "If true, enable QUIC version T050.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_enabled, false, "")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_fix_bbr_cwnd_in_bandwidth_resumption, true,
            "If true, adjust congestion window when doing bandwidth resumption in BBR.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_listener_never_fake_epollout, false,
            "If true, QuicListener::OnSocketIsWritable will always return false, which means there "
            "will never be a fake EPOLLOUT event in the next epoll iteration.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_minimum_validation_of_coalesced_packets, false,
    "If true, only do minimum validation of coalesced packets (only validate connection ID).")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_negotiate_ack_delay_time, false,
            "If true, will negotiate the ACK delay time.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_neuter_unencrypted_control_frames, true,
    "If true, neuter unencrypted control frames in QuicUnackedPacketMap::NeuterUnencryptedPackets.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_no_dup_experiment_id_2, false,
            "If true, transport connection stats doesn't report duplicated experiments for same "
            "connection.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_no_window_update_if_disconnected, true,
            "If true, do not send WINDOW_UPDATE if connection has been disconnected.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_populate_mean_rtt_deviation_in_tcs, true,
            "If true, populate mean rtt deviation in transport connection stats.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_proxy_write_packed_strings, false,
            "If true, QuicProxyDispatcher will write packed_client_address and packed_server_vip "
            "in TcpProxyHeaderProto.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_record_frontend_service_vip_mapping, false,
            "If true, for L1 GFE, as requests come in, record frontend service to VIP mapping "
            "which is used to announce VIP in SHLO for proxied sessions. ")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_reject_all_traffic, false, "")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_require_handshake_confirmation, false,
            "If true, require handshake confirmation for QUIC connections, functionally disabling "
            "0-rtt handshakes.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_send_timestamps, false,
            "When the STMP connection option is sent by the client, timestamps in the QUIC ACK "
            "frame are sent and processed.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_server_push, true,
            "If true, enable server push feature on QUIC.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_set_send_algorithm_noop_if_cc_type_unchanged, true,
            "If true, QuicSentPacketManager::SetSendAlgorithm(CongestionControlType) will become a "
            "no-op if the current and the requested cc_type are the same.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_skip_packet_threshold_loss_detection_with_runt, false,
            "If true, skip packet threshold loss detection if largest acked is a runt.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_testonly_default_false, false,
            "A testonly reloadable flag that will always default to false.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_testonly_default_true, true,
            "A testonly reloadable flag that will always default to true.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_tracegraf_populate_rtt_variation, true,
            "If true, QUIC tracegraf populates RTT variation.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_unified_iw_options, false,
            "When true, set the initial congestion control window from connection options in "
            "QuicSentPacketManager rather than TcpCubicSenderBytes.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_use_ack_frame_to_get_min_size, false,
    "If true, use passed in ack_frame to calculate minimum size of the serialized ACK frame.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_use_header_stage_idle_list2, false,
            "If true, use header stage idle list for QUIC connections in GFE.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_use_ip_bandwidth_module, true,
            "If true, use IpBandwidthModule for cwnd bootstrapping if it is registered.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_use_leto_key_exchange, false,
            "If true, QUIC will attempt to use the Leto key exchange service and only fall back to "
            "local key exchange if that fails.")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_use_pigeon_sockets, false,
            "Use USPS Direct Path for QUIC egress.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_use_quic_time_for_received_timestamp2, false,
    "If true, use QuicClock::Now() as the source of packet receive time instead of WallNow().")

QUICHE_FLAG(bool, quic_reloadable_flag_quic_use_standard_deviation_for_pto, false,
            "If true, use standard deviation when calculating PTO timeout.")

QUICHE_FLAG(
    bool, quic_reloadable_flag_quic_writevdata_at_level, false,
    "If true, QuicSession::WritevData() will support writing data at a specified encryption level.")

QUICHE_FLAG(bool, quic_reloadable_flag_send_quic_fallback_server_config_on_leto_error, false,
            "If true and using Leto for QUIC shared-key calculations, GFE will react to a failure "
            "to contact Leto by sending a REJ containing a fallback ServerConfig, allowing the "
            "client to continue the handshake.")

QUICHE_FLAG(
    bool, quic_restart_flag_dont_fetch_quic_private_keys_from_leto, false,
    "If true, GFE will not request private keys when fetching QUIC ServerConfigs from Leto.")

QUICHE_FLAG(
    bool, quic_restart_flag_quic_allow_loas_multipacket_chlo, false,
    "If true, inspects QUIC CHLOs for kLOAS and early creates sessions to allow multi-packet CHLOs")

QUICHE_FLAG(bool, quic_restart_flag_quic_batch_writer_always_drop_packets_on_error, false,
            "If true, QUIC (gso|sendmmsg) batch writers will always drop packets on write error.")

QUICHE_FLAG(
    bool, quic_restart_flag_quic_no_cap_net_raw_for_usps_egress, true,
    "If true, gfe2::RawSocket::CapabilityNeeded will return false if QUIC egress method is USPS.")

QUICHE_FLAG(bool, quic_restart_flag_quic_no_fallback_for_pigeon_socket, true,
            "If true, GFEs using USPS egress will not fallback to raw ip socket.")

QUICHE_FLAG(bool, quic_restart_flag_quic_offload_pacing_to_usps2, false,
            "If true, QUIC offload pacing when using USPS as egress method.")

QUICHE_FLAG(bool, quic_restart_flag_quic_rx_ring_use_tpacket_v3, false,
            "If true, use TPACKET_V3 for QuicRxRing instead of TPACKET_V2.")

QUICHE_FLAG(bool, quic_restart_flag_quic_should_accept_new_connection, false,
            "If true, reject QUIC CHLO packets when dispatcher is asked to do so.")

QUICHE_FLAG(bool, quic_restart_flag_quic_testonly_default_false, false,
            "A testonly restart flag that will always default to false.")

QUICHE_FLAG(bool, quic_restart_flag_quic_testonly_default_true, true,
            "A testonly restart flag that will always default to true.")

QUICHE_FLAG(
    bool, quic_restart_flag_quic_use_leto_for_quic_configs, false,
    "If true, use Leto to fetch QUIC server configs instead of using the seeds from Memento.")

QUICHE_FLAG(bool, quic_restart_flag_quic_use_pigeon_socket_to_backend, false,
            "If true, create a shared pigeon socket for all quic to backend connections and switch "
            "to use it after successful handshake.")

QUICHE_FLAG(bool, quic_restart_flag_quic_use_rxring_when_explicitly_specified, true,
            "If true, GFE will use QuicRxRing for ingress only when ingress_method is explicitly "
            "set to RXRING_INGRESS in quic_config.")

QUICHE_FLAG(
    bool, spdy_reloadable_flag_spdy_discard_response_body_if_disallowed, false,
    "If true, SPDY will discard all response body bytes when response code indicates no response "
    "body should exist. Previously, we only discard partial bytes on the first response processing "
    "and the rest of the response bytes would still be delivered even though the response code "
    "said there should not be any body associated with the response code.")

QUICHE_FLAG(bool, spdy_reloadable_flag_spdy_enable_granular_decompress_errors, false,
            "If true, emit more granular errors instead of "
            "SpdyFramerError::SPDY_DECOMPRESS_FAILURE in Http2DecoderAdapter.")

QUICHE_FLAG(bool, quic_allow_chlo_buffering, true,
            "If true, allows packets to be buffered in anticipation of a "
            "future CHLO, and allow CHLO packets to be buffered until next "
            "iteration of the event loop.")

QUICHE_FLAG(bool, quic_disable_pacing_for_perf_tests, false, "If true, disable pacing in QUIC")

QUICHE_FLAG(bool, quic_enforce_single_packet_chlo, true,
            "If true, enforce that QUIC CHLOs fit in one packet")

QUICHE_FLAG(int64_t, quic_time_wait_list_max_connections, 600000,
            "Maximum number of connections on the time-wait list. "
            "A negative value implies no configured limit.")

QUICHE_FLAG(int64_t, quic_time_wait_list_seconds, 200,
            "Time period for which a given connection_id should live in "
            "the time-wait state.")

QUICHE_FLAG(double, quic_bbr_cwnd_gain, 2.0f,
            "Congestion window gain for QUIC BBR during PROBE_BW phase.")

QUICHE_FLAG(int32_t, quic_buffered_data_threshold, 8 * 1024,
            "If buffered data in QUIC stream is less than this "
            "threshold, buffers all provided data or asks upper layer for more data")

QUICHE_FLAG(int32_t, quic_send_buffer_max_data_slice_size, 4 * 1024,
            "Max size of data slice in bytes for QUIC stream send buffer.")

QUICHE_FLAG(int32_t, quic_lumpy_pacing_size, 2,
            "Number of packets that the pacing sender allows in bursts during "
            "pacing. This flag is ignored if a flow's estimated bandwidth is "
            "lower than 1200 kbps.")

QUICHE_FLAG(double, quic_lumpy_pacing_cwnd_fraction, 0.25f,
            "Congestion window fraction that the pacing sender allows in bursts "
            "during pacing.")

QUICHE_FLAG(int32_t, quic_max_pace_time_into_future_ms, 10,
            "Max time that QUIC can pace packets into the future in ms.")

QUICHE_FLAG(double, quic_pace_time_into_future_srtt_fraction, 0.125f,
            "Smoothed RTT fraction that a connection can pace packets into the future.")

QUICHE_FLAG(bool, quic_export_server_num_packets_per_write_histogram, false,
            "If true, export number of packets written per write operation histogram.")

QUICHE_FLAG(bool, quic_disable_version_negotiation_grease_randomness, false,
            "If true, use predictable version negotiation versions.")

QUICHE_FLAG(bool, quic_enable_http3_grease_randomness, true,
            "If true, use random greased settings and frames.")

QUICHE_FLAG(int64_t, quic_max_tracked_packet_count, 10000, "Maximum number of tracked packets.")

QUICHE_FLAG(bool, quic_prober_uses_length_prefixed_connection_ids, false,
            "If true, QuicFramer::WriteClientVersionNegotiationProbePacket uses "
            "length-prefixed connection IDs.")

QUICHE_FLAG(bool, quic_client_convert_http_header_name_to_lowercase, true,
            "If true, HTTP request header names sent from QuicSpdyClientBase(and "
            "descendents) will be automatically converted to lower case.")

QUICHE_FLAG(int32_t, quic_bbr2_default_probe_bw_base_duration_ms, 2000,
            "The default minimum duration for BBRv2-native probes, in milliseconds.")

QUICHE_FLAG(int32_t, quic_bbr2_default_probe_bw_max_rand_duration_ms, 1000,
            "The default upper bound of the random amount of BBRv2-native "
            "probes, in milliseconds.")

QUICHE_FLAG(int32_t, quic_bbr2_default_probe_rtt_period_ms, 10000,
            "The default period for entering PROBE_RTT, in milliseconds.")

QUICHE_FLAG(double, quic_bbr2_default_loss_threshold, 0.3,
            "The default loss threshold for QUIC BBRv2, should be a value "
            "between 0 and 1.")

QUICHE_FLAG(int32_t, quic_bbr2_default_startup_full_loss_count, 2,
            "The default minimum number of loss marking events to exit STARTUP.")

QUICHE_FLAG(int32_t, quic_bbr2_default_probe_bw_full_loss_count, 2,
            "The default minimum number of loss marking events to exit PROBE_UP phase.")

QUICHE_FLAG(double, quic_bbr2_default_inflight_hi_headroom, 0.01,
            "The default fraction of unutilized headroom to try to leave in path "
            "upon high loss.")

QUICHE_FLAG(int32_t, quic_bbr2_default_initial_ack_height_filter_window, 10,
            "The default initial value of the max ack height filter's window length.")

QUICHE_FLAG(double, quic_ack_aggregation_bandwidth_threshold, 1.0,
            "If the bandwidth during ack aggregation is smaller than (estimated "
            "bandwidth * this flag), consider the current aggregation completed "
            "and starts a new one.")

QUICHE_FLAG(int32_t, quic_anti_amplification_factor, 3,
            "Anti-amplification factor. Before address validation, server will "
            "send no more than factor times bytes received.")

QUICHE_FLAG(int32_t, quic_max_buffered_crypto_bytes, 16 * 1024,
            "The maximum amount of CRYPTO frame data that can be buffered.")

QUICHE_FLAG(int32_t, quic_max_aggressive_retransmittable_on_wire_ping_count, 0,
            "If set to non-zero, the maximum number of consecutive pings that "
            "can be sent with aggressive initial retransmittable on wire timeout "
            "if there is no new data received. After which, the timeout will be "
            "exponentially back off until exceeds the default ping timeout.")

QUICHE_FLAG(int32_t, quic_max_congestion_window, 2000, "The maximum congestion window in packets.")

QUICHE_FLAG(bool, http2_reloadable_flag_http2_testonly_default_false, false,
            "A testonly reloadable flag that will always default to false.")

QUICHE_FLAG(bool, http2_restart_flag_http2_testonly_default_false, false,
            "A testonly restart flag that will always default to false.")

QUICHE_FLAG(bool, spdy_reloadable_flag_spdy_testonly_default_false, false,
            "A testonly reloadable flag that will always default to false.")

QUICHE_FLAG(bool, spdy_restart_flag_spdy_testonly_default_false, false,
            "A testonly restart flag that will always default to false.")

#endif
