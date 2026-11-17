/* FUN_005b728c - 0x005b728c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b728c(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x710) == 0) {
    FUN_0060142b(0x6f,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457cda(0x34);
    FUN_004751b2(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    FUN_0060142b(0x6f,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00457cda(0x35);
    FUN_004751b2(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_0045ebca();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x621);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_007d40d5(uVar1,100);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


