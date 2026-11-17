/* FUN_00692ce9 - 0x00692ce9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00692ce9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0xfc);
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (iVar2 == 0) {
    iVar2 = FUN_00455c59(unaff_EBP + -0x20);
    iVar2 = *(int *)(iVar2 + 4);
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    iVar1 = iVar2 + 0xa5;
    uVar3 = FUN_00413367(iVar1,*(undefined4 *)(iVar2 + 0xad));
    uVar4 = FUN_00413367(iVar1,*(undefined4 *)(iVar2 + 0xad));
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
    puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x351);
    uVar4 = *puVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar6 = FUN_0069332d(uVar4,*(undefined4 *)(unaff_EBP + -0x14),uVar3);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    if (0 < iVar6) {
      iVar2 = FUN_00413367(iVar1,*(undefined4 *)(iVar2 + 0xad));
      if (iVar6 <= iVar2) {
        FUN_0060142b(0x3a,0,0);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        FUN_00457cda(7);
        FUN_00457d37(-iVar6);
        FUN_004751b2(unaff_EBP + -0x30);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xfc) = 1;
        FUN_0045ebca();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


