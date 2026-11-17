/* FUN_00834fcc - 0x00834fcc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00834fcc(void)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  int iVar8;
  int unaff_EBP;
  
  FUN_00879bb8();
  bVar3 = 0;
  iVar5 = FUN_004becbc(200,0);
  if (iVar5 != 0) {
    FUN_0060142b(0x47,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar6 = FUN_007d1e08();
    FUN_00457d37(uVar6);
    FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
    FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
    FUN_004751b2(unaff_EBP + -0x1c);
    iVar8 = 1;
    *(undefined4 *)(extraout_ECX + 0x208c) = 1;
    uVar6 = FUN_007d1e08();
    *(undefined4 *)(extraout_ECX + 0x2090) = uVar6;
    piVar1 = (int *)(DAT_00978358 + 0x1744);
    iVar5 = *(int *)(*piVar1 + 4);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar5 != 0) {
      iVar5 = FUN_0061411c();
      bVar3 = FUN_0045f03e(iVar5 + 0x43,*(undefined4 *)(iVar5 + 0x45));
    }
    do {
      if (*(int *)(*piVar1 + 4 + iVar8 * 8) != 0) {
        iVar5 = FUN_0061411c();
        bVar4 = FUN_0045f03e(iVar5 + 0x43,*(undefined4 *)(iVar5 + 0x45));
        if (bVar4 < bVar3) {
          iVar5 = FUN_0061411c();
          bVar3 = FUN_0045f03e(iVar5 + 0x43,*(undefined4 *)(iVar5 + 0x45));
          *(int *)(unaff_EBP + 8) = iVar8;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    iVar5 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + *(int *)(unaff_EBP + 8) * 8);
    if (iVar5 != 0) {
      puVar7 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x8e5);
      uVar6 = *puVar7;
      uVar2 = **(undefined4 **)(iVar5 + 0x78);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_007d48c3(uVar2,uVar6,100);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


