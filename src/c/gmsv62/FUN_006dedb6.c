/* FUN_006dedb6 - 0x006dedb6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006dedb6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 0x202) {
    FUN_006ddeb7();
    piVar6 = (int *)(**(code **)(*(int *)(DAT_00978358 + 4) + 0x10))();
    iVar7 = *(int *)(extraout_ECX + 0x58c);
    iVar1 = *piVar6;
    iVar2 = *(int *)(extraout_ECX + 0x590);
    iVar3 = piVar6[1];
    bVar8 = (byte)*(undefined4 *)(extraout_ECX + 0x594);
    iVar4 = *(int *)(extraout_ECX + 0x5a8);
    iVar5 = *(int *)(extraout_ECX + 0x5ac);
    (*DAT_0097b504)(unaff_EBP + -0x20,0xfffffffe,0xfffffffb,5,7);
    (*DAT_0097b54c)(unaff_EBP + -0x20,
                    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x5a0) +
                    ((iVar7 + iVar1 >> (bVar8 & 0x1f)) - iVar4),
                    *(int *)(*(int *)(unaff_EBP + -0x10) + 0x5a4) +
                    ((iVar2 + iVar3 >> (bVar8 & 0x1f)) - iVar5));
    iVar7 = (*DAT_0097b57c)(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0x10),
                            *(undefined4 *)(unaff_EBP + 0x14));
    if (iVar7 != 0) {
      FUN_0060142b(0x82,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_004751b2(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


