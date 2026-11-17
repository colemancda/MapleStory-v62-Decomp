/* FUN_004ee8ce - 0x004ee8ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ee8ce(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(extraout_ECX + 0x18) = uVar2;
  iVar3 = FUN_0048b567(uVar2);
  if (iVar3 == 0x13) {
    if (-1 < *(int *)(extraout_ECX + 0x18)) {
      puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x638);
      uVar2 = *puVar4;
      uVar1 = *(undefined4 *)(extraout_ECX + 0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00550bc4(unaff_EBP + -0x10,uVar1,uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      puVar4 = (undefined4 *)FUN_0045cdbc(unaff_EBP + 8);
      uVar2 = *puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00434e21(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + -0x10),uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      FUN_00471102(unaff_EBP + -0x10,9);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
    FUN_005a7667();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


