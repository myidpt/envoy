1.17.1 (Pending)
================

Incompatible Behavior Changes
-----------------------------
*Changes that are expected to cause an incompatibility if applicable; deployment changes are likely required*

Minor Behavior Changes
----------------------
*Changes that may cause incompatibilities for some users, but should not for most*

Bug Fixes
---------
*Changes expected to improve the state of the world and are unlikely to have negative effects*

* active http health checks: properly handles HTTP/2 GOAWAY frames from the upstream. Previously a GOAWAY frame due to a graceful listener drain could cause improper failed health checks due to streams being refused by the upstream on a connection that is going away. To revert to old GOAWAY handling behavior, set the runtime feature `envoy.reloadable_features.health_check.graceful_goaway_handling` to false.
* buffer: tighten network connection read and write buffer high watermarks in preparation to more careful enforcement of read limits. Buffer high-watermark is now set to the exact configured value; previously it was set to value + 1.
* fault injection: stop counting as active fault after delay elapsed. Previously fault injection filter continues to count the injected delay as an active fault even after it has elapsed. This produces incorrect output statistics and impacts the max number of consecutive faults allowed (e.g., for long-lived streams). This change decreases the active fault count when the delay fault is the only active and has gone finished.
* filter_chain: fix filter chain matching with the server name as the case-insensitive way.
* grpc-web: fix local reply and non-proto-encoded gRPC response handling for small response bodies. This fix can be temporarily reverted by setting `envoy.reloadable_features.grpc_web_fix_non_proto_encoded_response_handling` to false.
* grpc_http_bridge: the downstream HTTP status is now correctly set for trailers-only responses from the upstream.
* http: disallowing "host:" in request_headers_to_add for behavioral consistency with rejecting :authority header. This behavior can be temporarily reverted by setting `envoy.reloadable_features.treat_host_like_authority` to false.
* http: reverting a behavioral change where upstream connect timeouts were temporarily treated differently from other connection failures. The change back to the original behavior can be temporarily reverted by setting `envoy.reloadable_features.treat_upstream_connect_timeout_as_connect_failure` to false.
* jwt_authn: reject requests with a proper error if JWT has the wrong issuer when allow_missing is used. Before this change, the requests are accepted.
* listener: prevent crashing when an unknown listener config proto is received and debug logging is enabled.
* overload: fix a bug that can cause use-after-free when one scaled timer disables another one with the same duration.

Removed Config or Runtime
-------------------------
*Normally occurs at the end of the* :ref:`deprecation period <deprecated>`

New Features
------------

Deprecated
----------
