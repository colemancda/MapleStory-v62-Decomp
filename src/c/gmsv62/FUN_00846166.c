/* FUN_00846166 - 0x00846166 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00846166(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  iVar3 = FUN_00455c59(unaff_EBP + -0x2c);
  uVar1 = *(undefined4 *)(iVar3 + 4);
  iVar3 = 0;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    FUN_0045e7c2(0);
  }
  uVar4 = FUN_0083cbf6();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00700545(unaff_EBP + -0x20);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  while ((iVar2 = *(int *)(unaff_EBP + -0x20), iVar2 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar2 + -4)))) {
    uVar4 = CONCAT22((short)((uint)iVar2 >> 0x10),
                     *(undefined2 *)(iVar2 + *(uint *)(unaff_EBP + -0x10) * 2));
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
    iVar3 = FUN_005ee726(unaff_EBP + -0x24);
    if ((iVar3 == 0) && (iVar3 = FUN_005ee6cd(unaff_EBP + -0x18,0), iVar3 == 0)) {
      uVar4 = *(undefined4 *)(DAT_00978368 + 0x3308);
      (**(code **)(*DAT_00978358 + 4))();
      uVar5 = FUN_004bf0d4();
      iVar3 = FUN_0062d669(*(undefined4 *)(unaff_EBP + -0x18),0,uVar1,uVar5,uVar4,
                           *(undefined4 *)(unaff_EBP + -0x28));
      if (iVar3 != 0) {
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    iVar3 = *(int *)(unaff_EBP + -0x14);
  }
  piVar6 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x3290);
  bVar7 = *piVar6 != iVar3;
  if (bVar7) {
    *piVar6 = iVar3;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ee767();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar7;
}


