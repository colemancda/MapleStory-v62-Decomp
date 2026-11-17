/* ptr_00444e5f - 0x00444e5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_00444e5f(int *param_1)

{
  int in_EAX;
  
  param_1[0x11f] = in_EAX;
  FUN_00441501(0);
  (**(code **)(*param_1 + 0x10))(6,100,0);
  return 1;
}


