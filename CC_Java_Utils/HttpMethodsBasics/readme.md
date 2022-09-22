# Http Methods

## 1. Get
## 2. Post
## 3. Put
## 4. Delete
## 5. Patch


# Safe and unsafe

### Get is safe rest are unsafe.

# Idempotency
## Idempotence is the property of certain operations in mathematics and computer science whereby they can be applied multiple times without changing the result beyond the initial application.

### Put,delete, patch are idempotent. Because triggering the update/delete multiple times on the same user data based on id will not change. 


# Definitions


1. GET: employed for receiving information about a resource. In this way, this method can both return already available data or trigger a data-producing process in the server
HEAD: returns only the metainformation of HTTP headers of a GET method. It means that the body content of an entity isn’t provided
2. POST: designed to send a new entity of a resource within the request. Thus, the server subordinates the received entity to the resource
3. PUT: sends an enclosed entity of a resource to the server. If the entity already exists, the server updates its data. Otherwise, the server creates a new entity
4. DELETE: triggers the deletion of an entity of a resource. The request must inform the target entity
5. PATCH: allows the modification of an entity of a resource. So, it can be applied to change only particular portions of an entity data


# Extra methods

1.  OPTIONS: describes the supported HTTP methods of resources. Furthermore, it informs these resources options, requirements, and parameters
2. TRACE: a method with debugging purposes. It returns the entire request to the client. Typically, gateways and proxies tests use this method
3. CONNECT: employed for tunneling communications. For example, it is useful to establish connections with SSL-enabled websites 

