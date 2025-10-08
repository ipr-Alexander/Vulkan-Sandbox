SET(files_project
	main.cc
	helloTriangle.cc
	helloTriangle.hh
)
SET(all_files_project ${files_project})

ADD_EXECUTABLE(VulkanSandbox ${all_files_project})
