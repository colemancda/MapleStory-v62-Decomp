/* FUN_006ddfe2 - 0x006ddfe2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ddfe2(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_5ac [4];
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 1000) {
    iVar1 = *(int *)(extraout_ECX + 0x570) + 1;
  }
  else {
    if (iVar1 != 0x3e9) {
      if (iVar1 == 0x3ea) {
        uStack_59c = 0x6de015;
        iVar1 = FUN_00429303();
        if (iVar1 != 0) {
          uStack_59c = 0x6de02c;
          FUN_0081be45();
          uStack_59c = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          uStack_5a0 = 0x6de03b;
          uStack_5a0 = FUN_004f162d();
          uStack_5a4 = 0x6de047;
          iVar1 = FUN_0081d7f3();
          if (iVar1 == 0) {
            uStack_59c = 0;
            uStack_5a0 = 0;
            uStack_5a4 = 0;
            uStack_5a8 = 0;
            if (*(int *)(DAT_00978368 + 0x2084) == 0) {
              *(undefined1 **)(unaff_EBP + 8) = auStack_5ac;
              uVar2 = 0x118;
            }
            else {
              *(undefined1 **)(unaff_EBP + 8) = auStack_5ac;
              uVar2 = 0x11a;
            }
            FUN_00679d22(auStack_5ac,uVar2);
            FUN_007db3ad();
          }
          else {
            uStack_59c = 0x6de056;
            FUN_004bc6a2();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uStack_59c = 0x6de0a0;
          FUN_0081bf02();
        }
      }
      goto LAB_006de0cb;
    }
    iVar1 = *(int *)(extraout_ECX + 0x570) + -1;
  }
  *(int *)(extraout_ECX + 0x570) = iVar1 % 3;
  uStack_59c = 0x6de0cb;
  FUN_006dc63c();
LAB_006de0cb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


