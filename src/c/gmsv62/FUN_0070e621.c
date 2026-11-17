/* FUN_0070e621 - 0x0070e621 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070e621(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00879bb8();
  uVar2 = extraout_ECX;
  uVar3 = extraout_ECX;
  uVar1 = FUN_0070ecbe(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  FUN_0070ee28(unaff_EBP + 8,unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_0070cda4(*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0070edc2(uVar2,uVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


