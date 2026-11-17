/* FUN_006a3fe1 - 0x006a3fe1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a3fe1(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  char *pcStack_1c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    pcStack_1c = (char *)(unaff_EBP + -0x14);
    uStack_20 = 0x6a400d;
    FUN_0045b90e();
    pcStack_1c = (char *)0x0;
    uStack_20 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_24 = 0x6a4019;
    FUN_0045ed72();
    uStack_20 = 0x6a4020;
    pcStack_1c = (char *)FUN_0045ee27();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uStack_20 = 0x6a402c;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    pcStack_1c = "WSWh";
    FUN_00414ebb();
    pcStack_1c = (char *)0x1;
    uStack_20 = 0;
    uStack_24 = 1;
    uStack_28 = 0x400;
    uStack_2c = 0x6a4048;
    uStack_24 = FUN_00415015();
    uStack_28 = 0x6a404e;
    uVar1 = FUN_00471777();
    pcStack_1c = (char *)0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
    uStack_20 = 0x6a405e;
    FUN_004150c0();
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
      uVar1 = 0x11d;
    }
    else {
      pcStack_1c = *(char **)(unaff_EBP + -0x10);
      if ((pcStack_1c == (char *)0x0) || (*pcStack_1c == '\0')) {
        *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
        uVar1 = 0x1116;
      }
      else {
        if (*(int *)(pcStack_1c + -4) < 0x46) {
          uStack_20 = 0x6a40cf;
          FUN_004a2fef();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          pcStack_1c = (char *)0x6a40db;
          FUN_00414ebb();
          goto LAB_006a40db;
        }
        *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
        uVar1 = 0x111a;
      }
    }
    pcStack_1c = (char *)0x0;
    uStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    FUN_00679d22(&uStack_2c,uVar1);
    FUN_007db3ad();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    pcStack_1c = (char *)0x6a40c4;
    FUN_00414ebb();
  }
  else {
LAB_006a40db:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        pcStack_1c = (char *)0x6a40f5;
        FUN_00815de9();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


