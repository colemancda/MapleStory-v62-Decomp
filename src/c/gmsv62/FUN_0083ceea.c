/* FUN_0083ceea - 0x0083ceea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083ceea(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  (**(code **)(*DAT_00978358 + 4))();
  iVar2 = FUN_004bf0d4();
  if (iVar2 == 0) {
    iVar2 = FUN_004cd670(DAT_00978358 + 0x7bc,DAT_00978358[0x7be]);
    if ((iVar2 == 0) && (DAT_00979178 == 0)) {
      iVar2 = FUN_0083ae79(*(undefined4 *)(unaff_EBP + 0xc));
      if (iVar2 != 0) {
        bVar1 = FUN_0045f03e(*(int *)(extraout_ECX + 0x2098) + 0x33,
                             *(undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0x35));
        iVar2 = FUN_00554e55(*(undefined4 *)(unaff_EBP + 0xc));
        if (iVar2 < (int)(uint)bVar1) {
          uVar3 = FUN_00679d22(unaff_EBP + 0xc,0xc20);
          *(undefined4 *)(unaff_EBP + -4) = 1;
          FUN_00471102(uVar3,0xc);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          iVar2 = FUN_00413367(*(int *)(extraout_ECX + 0x2098) + 0xb1,
                               *(undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0xb9));
          if (iVar2 == 0) {
            iVar2 = FUN_007a3f46();
            if ((iVar2 == 0) && (DAT_00978358[0x915] == 0)) {
              iVar2 = FUN_004becbc(500,0);
              if (iVar2 != 0) {
                FUN_0060142b(0x89,0,0);
                *(undefined4 *)(unaff_EBP + -4) = 3;
                uVar3 = FUN_007d1e08();
                FUN_00457d37(uVar3);
                FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
                FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
                FUN_004751b2(unaff_EBP + -0x1c);
                *(undefined4 *)(extraout_ECX + 0x208c) = 1;
                uVar4 = FUN_007d1e08();
                uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
                *(undefined4 *)(extraout_ECX + 0x2090) = uVar4;
                FUN_007d3d3e(uVar3,0x1d);
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_0045ebca();
              }
            }
            goto LAB_0083d0e7;
          }
          uVar3 = FUN_00679d22(unaff_EBP + 8,0x11eb);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_00471102(uVar3,0xc);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        FUN_00414ebb();
      }
    }
  }
  else {
    uVar3 = FUN_00679d22(unaff_EBP + 0xc,0xe9e);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
    }
  }
LAB_0083d0e7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


