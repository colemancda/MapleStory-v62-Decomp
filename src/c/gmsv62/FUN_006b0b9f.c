/* FUN_006b0b9f - 0x006b0b9f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b0b9f(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int local_24;
  
  FUN_00879bb8();
  *(int **)(unaff_EBP + -0x10) = &local_24;
  local_24 = 0;
  FUN_004184ca(&DAT_0097812c,0xffffffff);
  FUN_0078a024(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  local_24 = 0x1129;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_24 = FUN_00679d86(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_24 = 0x6b0c0e;
  FUN_00402676();
  local_24 = 0x578;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    local_24 = 0;
  }
  else {
    local_24 = 0x6b0c2f;
    local_24 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00450382();
  local_24 = unaff_EBP + -0x20;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))(extraout_ECX,0xbba,0x66,0x118,1);
  FUN_006b4156();
  *(undefined4 *)(extraout_ECX + 0x588) = 0;
  if (*(int *)(extraout_ECX + 0x570) != 0) {
    iVar1 = FUN_004029b9(0x57c);
    *(int *)(unaff_EBP + -0x10) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
      iVar1 = iVar1 + 0x7b;
      iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
      uVar3 = FUN_006b0d0c(iVar2 + 0xac,iVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_006b4101(uVar3);
    *(undefined4 *)(extraout_ECX + 0x588) = 1;
    *(undefined4 *)(extraout_ECX + 0x570) = 1;
  }
  FUN_008161f1(0);
  piVar4 = (int *)FUN_006b42c2(0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *piVar4 = extraout_ECX;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


