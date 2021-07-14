add_executable(hello hello.c)
add_executable(newhalf newhalf.c)

add_executable(shuixianhua shuixianhua.c)
target_link_libraries(shuixianhua  m)

add_executable(test test.c)
target_link_libraries(test  m)

add_executable(qinmishu qinmishu.c)
target_link_libraries(qinmishu  m)

add_executable(wanshu wanshu.c)

add_executable(sushu sushu.c)
target_link_libraries(sushu  m)


add_executable(half half.c)
target_link_libraries(half  m)

add_executable(pde pde.c)
target_link_libraries(pde  m)

add_executable(file file.c)

add_executable(shape shape.c)

add_executable(newshape newshape.c)


