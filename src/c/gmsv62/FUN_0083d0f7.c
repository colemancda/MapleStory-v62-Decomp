/* FUN_0083d0f7 - 0x0083d0f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083d0f7(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  (**(code **)(*DAT_00978358 + 4))();
  iVar2 = FUN_004bf0d4();
  if (iVar2 == 0) {
    iVar2 = FUN_004cd670(DAT_00978358 + 0x7bc,DAT_00978358[0x7be]);
    if ((iVar2 != 0) || (DAT_00979178 != 0)) goto LAB_0083d243;
    bVar1 = FUN_0045f03e(*(int *)(extraout_ECX + 0x2098) + 0x33,
                         *(undefined4 *)(*(int *)(extraout_ECX + 0x2098) + 0x35));
    if (bVar1 < 0x33) {
      iVar2 = FUN_007a3f46();
      if ((iVar2 == 0) && (DAT_00978358[0x915] == 0)) {
        iVar2 = FUN_004becbc(500,0);
        if (iVar2 != 0) {
          FUN_0060142b(0x8a,0,0);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          uVar3 = FUN_007d1e08();
          FUN_00457d37(uVar3);
          FUN_004751b2(unaff_EBP + -0x24);
          *(undefined4 *)(extraout_ECX + 0x208c) = 1;
          uVar3 = FUN_007d1e08();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
          FUN_0045ebca();
        }
      }
      goto LAB_0083d243;
    }
    uVar3 = FUN_00679d22(unaff_EBP + -0x14,0xc20);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    uVar3 = FUN_00679d22(unaff_EBP + -0x10,0xe9e);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar3,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
LAB_0083d243:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


