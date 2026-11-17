/* FUN_0078232d - 0x0078232d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078232d(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0xd1,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004751b2(unaff_EBP + -0x1c);
  uVar1 = (*DAT_0097b704)();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x638) = uVar1;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


