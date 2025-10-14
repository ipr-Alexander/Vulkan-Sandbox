SET(files_project
	main.cc
	helloTriangle.cc
	helloTriangle.hh
	rendering/vertex.cc
	rendering/vertex.hh
	rendering/uniformBuffer.cc
	rendering/uniformBuffer.hh
)
SET(all_files_project ${files_project})

ADD_EXECUTABLE(VulkanSandbox ${all_files_project})
