/* FUN_00565b9d - 0x00565b9d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00565b9d(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00434e21(unaff_EBP + -0x10,s_uiWndZ0_009656c0);
  uVar1 = FUN_0047c824(0,*(undefined4 *)(unaff_EBP + -0x10),0,0x80000000,0x7fffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


