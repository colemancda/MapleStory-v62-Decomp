/* FUN_00566401 - 0x00566401 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00566401(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  uint uVar7;
  
  FUN_00879bb8();
  uVar7 = 0;
  iVar6 = *(int *)(extraout_ECX + 0x144);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (iVar6 == 0) {
    uVar4 = 0;
    iVar6 = 0;
    while( true ) {
      iVar3 = *(int *)(extraout_ECX + 0x15c);
      if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar4)) goto LAB_005665a3;
      if (*(int *)(iVar6 + iVar3) == *(int *)(unaff_EBP + 8)) break;
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 0x20;
    }
    if ((((-1 < (int)uVar4) && (*(int *)(extraout_ECX + 0x15c) != 0)) &&
        (uVar4 < *(uint *)(*(int *)(extraout_ECX + 0x15c) + -4))) &&
       (-1 < (int)*(uint *)(unaff_EBP + 0xc))) {
      puVar1 = (undefined4 *)(uVar4 * 0x20 + *(int *)(extraout_ECX + 0x15c));
      iVar6 = puVar1[7];
      if ((iVar6 != 0) && (*(uint *)(unaff_EBP + 0xc) < *(uint *)(iVar6 + -4))) {
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + -4);
        }
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        FUN_0047266d(uVar5,unaff_EBP + 0xb);
        iVar6 = puVar1[7];
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar6 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iVar6 + -4);
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        FUN_0056a96b(uVar5,unaff_EBP + -0xd);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar6 = 0;
        for (; (iVar3 = puVar1[7], iVar3 != 0 && (uVar7 < *(uint *)(iVar3 + -4))); uVar7 = uVar7 + 1
            ) {
          FUN_00414f8b(iVar3 + iVar6);
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + uVar7 * 4) =
               *(undefined4 *)(puVar1[7] + 0x10 + iVar6);
          iVar6 = iVar6 + 0x14;
        }
        FUN_00830029(*puVar1,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x18,unaff_EBP + -0x14);
        FUN_0060142b(5,0,0);
        uVar2 = *(undefined1 *)puVar1;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00457cda(uVar2);
        FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
        FUN_004751b2(unaff_EBP + -0x2c);
        *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x144) = 1;
        FUN_00414f8b(puVar1 + 1);
        FUN_0047a88e();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0045ebca();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00524ec7();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0045f10c();
      }
    }
  }
LAB_005665a3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


