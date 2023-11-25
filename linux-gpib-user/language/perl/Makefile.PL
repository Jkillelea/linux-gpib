use ExtUtils::MakeMaker;
# See lib/ExtUtils/MakeMaker.pm for details of how to influence
# the contents of the Makefile that is written.
WriteMakefile(
    'NAME'					=> 'LinuxGpib',
    'VERSION_FROM'	=> 'LinuxGpib.pm', # finds $VERSION
    'PREREQ_PM'			=> {}, # e.g., Module::Name => 1.1
#    'ABSTRACT_FROM' => 'LinuxGpib.pm', # retrieve abstract from module
    'AUTHOR'     		=> 'Thomas Nisius <tnisius@web.de>',
    'LIBS'					=> ['-L/tmp/tmp.HYKi7kwhC2/linux-gpib-4.3.6/linux-gpib-user-4.3.6/lib/.libs -lgpib -lpthread'],
#    'DEFINE'				=> '', # e.g., '-DHAVE_SOMETHING'
    'INC'						=> '-I/tmp/tmp.HYKi7kwhC2/linux-gpib-4.3.6/linux-gpib-user-4.3.6/include',
#    'OBJECT'				=> '$(O_FILES)', # link all the C files too
    'DISTNAME'			=> 'LinuxGpib',
);
