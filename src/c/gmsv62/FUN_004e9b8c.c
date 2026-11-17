/* FUN_004e9b8c - 0x004e9b8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e9b8c(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(DAT_00978358 + 0x4e0) == 0) && (*(int *)(DAT_00978358 + 0x4f4) == 0)) {
    uVar1 = FUN_0045e4b8();
    if ((uVar1 & 1) == 0) {
      if (DAT_00979178 == 0) {
        iVar3 = FUN_007c0ccd(**(undefined4 **)(unaff_EBP + 8));
        if (iVar3 != 0) {
          FUN_0060142b(0x6f,0,0);
          *(undefined4 *)(unaff_EBP + -4) = 4;
          FUN_00457cda(0);
          FUN_00457cda(3);
          FUN_00457cda(0);
          FUN_004751b2(unaff_EBP + -0x20);
          FUN_00601477(0x6f,0,0);
          FUN_00457cda(2);
          FUN_00457d37(*(undefined4 *)(iVar3 + 0xd78));
          FUN_004751b2(unaff_EBP + -0x20);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045ebca();
          goto LAB_004e9d28;
        }
        uVar2 = FUN_00679d22(unaff_EBP + -0x10,0x17e);
        *(undefined4 *)(unaff_EBP + -4) = 3;
        FUN_00471102(uVar2,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        uVar2 = FUN_00679d22(unaff_EBP + 8,0x9a);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00471102(uVar2,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
    }
    else {
      uVar2 = FUN_00679d22(unaff_EBP + 8,0x99);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00471102(uVar2,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  else {
    uVar2 = FUN_00679d22(unaff_EBP + 8,0xd8b);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar2,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
LAB_004e9d28:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


