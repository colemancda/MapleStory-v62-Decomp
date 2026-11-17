/* FUN_00761045 - 0x00761045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00761045(void)

{
  int iVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  
  FUN_00879bb8();
  iVar2 = DAT_0097951c;
  iVar1 = *(int *)(DAT_0097951c + 0x6b0);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(int *)(unaff_EBP + -0x20) = iVar2;
  if (iVar1 == 0) {
    iVar1 = 0;
LAB_00761080:
    *(int *)(unaff_EBP + -0x18) = iVar1;
  }
  else {
    iVar1 = *(int *)(iVar1 + -4);
    *(undefined4 *)(unaff_EBP + -0x18) = 3;
    if (iVar1 < 4) goto LAB_00761080;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(unaff_EBP + -0x18)) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x20;
    do {
      if (*(int *)(unaff_EBP + -0x1c) != 0) goto LAB_0076125b;
      uStack_70 = *(undefined4 *)(unaff_EBP + 0xc);
      *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x14);
      iStack_74 = *(int *)(unaff_EBP + 8);
      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x14) + 0x20;
      iStack_78 = unaff_EBP + -0x40;
      *(undefined4 *)(unaff_EBP + -0x40) = 0x11;
      *(undefined4 *)(unaff_EBP + -0x38) = 0x31;
      uStack_7c = 0x7610ce;
      iVar1 = (*DAT_0097b57c)();
      if (iVar1 != 0) {
        uStack_70 = 0x7610f2;
        uStack_70 = FUN_0045e2eb();
        iStack_74 = unaff_EBP + -0x28;
        iStack_78 = 0x761102;
        FUN_0084a5e4();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x24) == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar1 = 0;
        }
        else {
          uStack_70 = 0x761125;
          uStack_70 = FUN_0045e2eb();
          iStack_74 = unaff_EBP + -0x30;
          iStack_78 = 0x761131;
          FUN_00554ef3();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uStack_70 = 0x761140;
          iVar1 = FUN_0045e2eb();
          if (iVar1 / 10000 == 0x38e) {
            uStack_70 = 0;
            iStack_74 = 0;
            iStack_78 = 10000;
            uStack_7c = 10000;
            *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_7c;
            FUN_0045e0ed(unaff_EBP + -0x28);
            iVar1 = *extraout_ECX;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            iVar1 = (**(code **)(iVar1 + 0x30))();
            iVar1 = (**(code **)(*extraout_ECX + 0x2c))(iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc));
            FUN_00753933(iVar1 + 0x14 + *(int *)(unaff_EBP + 8));
LAB_00761208:
            *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          }
          else {
            uStack_70 = 0x76119d;
            iVar1 = FUN_0045e2eb();
            if ((iVar1 / 10000 != 0x38f) && (iVar1 / 10000 != 0x21f)) {
              uStack_70 = 0x7611b6;
              FUN_00489d8c();
              uStack_70 = 0;
              *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -0x24);
              iStack_74 = 0;
              iStack_78 = unaff_EBP + -0x6c;
              uStack_7c = *(undefined4 *)(unaff_EBP + -0x2c);
              iVar1 = *extraout_ECX;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              *(undefined4 *)(unaff_EBP + -0x60) = 1;
              *(undefined4 *)(unaff_EBP + -0x5c) = 0;
              iVar1 = (**(code **)(iVar1 + 0x30))();
              iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
              iVar2 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
              FUN_00759767(iVar2 + 0x14 + *(int *)(unaff_EBP + 8),iVar1);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              uStack_70 = 0x761208;
              FUN_00489db7();
              goto LAB_00761208;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x2c) != 0) {
            uStack_70 = 0;
            iStack_74 = 0x761220;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar1 = *(int *)(unaff_EBP + -0x24);
        }
        if (iVar1 != 0) {
          uStack_70 = 0;
          iStack_74 = 0x761235;
          FUN_0045e794();
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
        }
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x28;
    } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x18));
    if (*(int *)(unaff_EBP + -0x1c) != 0) goto LAB_0076125b;
  }
  uStack_70 = 0x76125b;
  FUN_0074d6fb();
LAB_0076125b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


