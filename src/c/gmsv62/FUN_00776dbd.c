/* FUN_00776dbd - 0x00776dbd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00776dbd(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(*(int *)(extraout_ECX + 0x24) + 0x818);
  if ((iVar1 != 0) && (iVar1 != *(int *)(DAT_00978368 + 0x2088))) {
    FUN_0060142b(0x83,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(7);
    FUN_00457d37(*(undefined4 *)(*(int *)(extraout_ECX + 0x24) + 0x818));
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


