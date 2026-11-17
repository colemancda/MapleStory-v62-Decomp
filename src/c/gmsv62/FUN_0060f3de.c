/* FUN_0060f3de - 0x0060f3de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0060f3de(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined8 uVar5;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  iVar1 = extraout_ECX[0x30];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    if (extraout_ECX[0x62] == extraout_ECX[0x6b]) {
LAB_0060f6fc:
      iStack_40 = 0;
      iStack_44 = 0;
      piStack_48 = extraout_ECX + 0x1b;
      iStack_4c = 0;
      *(undefined4 **)(unaff_EBP + 0x10) = &uStack_50;
      FUN_00679d22(&uStack_50,0x1b3);
      FUN_007db3ad();
      goto LAB_0060f721;
    }
    iStack_40 = 0x60f418;
    iVar1 = (**(code **)(*extraout_ECX + 0x5c))();
    if ((iVar1 == 0) && (extraout_ECX[0x61] != 0)) goto LAB_0060f6fc;
    iStack_40 = 0;
    iStack_44 = 500;
    *(undefined4 *)(unaff_EBP + -0x24) = DAT_00978368;
    piStack_48 = (int *)0x60f43c;
    iVar1 = FUN_004becbc();
    if (iVar1 == 0) goto LAB_0060f721;
    iStack_40 = 0x60f44b;
    iVar1 = (**(code **)(*extraout_ECX + 0x5c))();
    if (iVar1 != 0) {
      iStack_40 = 0x60f460;
      iStack_40 = FUN_0045e2eb();
      iStack_44 = 0x60f468;
      iVar1 = FUN_0055416a();
      if ((iVar1 != 0) &&
         (iVar1 = extraout_ECX[0x62], *(undefined4 *)(unaff_EBP + -0x10) = 0, 0 < iVar1)) {
        do {
          iStack_40 = 0x60f48e;
          uVar2 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
          iStack_40 = 0x60f499;
          iVar1 = FUN_0045e2eb();
          if (iVar1 == *(int *)(unaff_EBP + -0x20)) {
            iStack_40 = 0;
            iStack_44 = 0;
            piStack_48 = (int *)0x0;
            iStack_4c = 0;
            *(undefined4 **)(unaff_EBP + 0x10) = &uStack_50;
            FUN_00679d22(&uStack_50,0xd55);
            FUN_007db3ad();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + 0xc) == 0) goto LAB_0060f72d;
            goto LAB_0060f515;
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < extraout_ECX[0x62]);
      }
    }
    iStack_40 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_44 = 0x60f4b9;
    uVar2 = FUN_004c24cb();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    iStack_40 = 0x60f4c8;
    iVar1 = FUN_0045e2eb();
    if ((iVar1 / 10000 == 0xcf) || (iVar1 / 10000 == 0xe9)) {
      uVar2 = 1;
    }
    else {
      iStack_40 = 0x60f52a;
      uVar2 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x18))();
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    iVar1 = extraout_ECX[0x1c];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar1 == 0) {
      iStack_40 = 0xac;
      iStack_44 = 0x60f54b;
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x20) = iVar1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar1 == 0) {
        iStack_40 = 0;
      }
      else {
        iStack_44 = *(undefined4 *)(unaff_EBP + -0x10);
        piStack_48 = (int *)0x60f561;
        iStack_40 = uVar2;
        iStack_40 = FUN_0060fbb8();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_44 = 0x60f572;
      iVar1 = FUN_006115c2();
      iStack_40 = *(undefined4 *)(iVar1 + 4);
      iStack_44 = 0x60f580;
      FUN_0057bb37();
      iStack_40 = 0x60f588;
      iVar1 = FUN_004bc6a2();
      iStack_40 = 0x60f591;
      FUN_0045e621();
      if (iVar1 == 1) {
        iStack_40 = unaff_EBP + -0x14;
        iStack_44 = unaff_EBP + -0x1c;
        piStack_48 = (int *)(unaff_EBP + -0x18);
        iStack_4c = 0x60f5cb;
        FUN_006104c1();
        iStack_4c = *(int *)(unaff_EBP + -0x18) / *(int *)(unaff_EBP + -0x14);
        piStack_48 = (int *)(iStack_4c >> 0x1f);
        iStack_44 = *(int *)(unaff_EBP + -0x1c);
        iStack_40 = iStack_44 >> 0x1f;
        uStack_50 = 0x60f5e4;
        uVar5 = __allmul();
        if (((int)((ulonglong)uVar5 >> 0x20) == 0) && ((uint)uVar5 < 0x80000000)) {
          iStack_40 = 0;
          iStack_44 = 0;
          piStack_48 = (int *)0x6f;
          iStack_4c = 0x60f63e;
          FUN_0060142b();
          iVar1 = *extraout_ECX;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_40 = 0x60f649;
          iVar1 = (**(code **)(iVar1 + 0x5c))();
          uVar3 = CONCAT31((int3)((uint)-iVar1 >> 8),-(iVar1 != 0)) & 0xffffff0b;
          iStack_40 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + '\x14');
          iStack_44 = 0x60f65a;
          FUN_00457cda();
          iStack_40 = *(undefined4 *)(unaff_EBP + 0x10);
          iStack_44 = 0x60f665;
          FUN_00457cda();
          iStack_40 = *(undefined4 *)(unaff_EBP + 0x14);
          iStack_44 = 0x60f670;
          FUN_0045d247();
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            iStack_40 = *(int *)(unaff_EBP + -0x18) / *(int *)(unaff_EBP + -0x14);
            iStack_44 = 0x60f693;
            FUN_0045d247();
            iStack_40 = *(undefined4 *)(unaff_EBP + -0x14);
          }
          else {
            iStack_40 = 1;
            iStack_44 = 0x60f67f;
            FUN_0045d247();
            iStack_40 = 1;
          }
          iStack_44 = 0x60f69e;
          FUN_0045d247();
          iStack_40 = *(undefined4 *)(unaff_EBP + -0x1c);
          iStack_44 = 0x60f6a9;
          FUN_00457d37();
          iStack_40 = unaff_EBP + -0x3c;
          iStack_44 = 0x60f6b8;
          FUN_004751b2();
          iVar1 = *(int *)(unaff_EBP + -0x24);
          uVar2 = 1;
          *(undefined4 *)(iVar1 + 0x208c) = 1;
          iStack_40 = 0x60f6c9;
          uVar4 = FUN_007d1e08();
          *(undefined4 *)(iVar1 + 0x2090) = uVar4;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_40 = 0x60f6da;
          FUN_0045ebca();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_40 = 0x60f6e6;
          FUN_0061166c();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + 0xc) != 0) {
            iStack_40 = 0;
            iStack_44 = 0x60f6f8;
            FUN_00449913();
          }
          goto LAB_0060f72f;
        }
        iStack_40 = 0;
        iStack_44 = 0;
        piStack_48 = (int *)0x0;
        iStack_4c = 0;
        *(undefined4 **)(unaff_EBP + 0x10) = &uStack_50;
        FUN_00679d22(&uStack_50,0x10c7);
        FUN_007db3ad();
        goto LAB_0060f613;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_40 = 0x60f5a2;
      FUN_0061166c();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + 0xc);
    }
    else {
LAB_0060f613:
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_40 = 0x60f61f;
      FUN_0061166c();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + 0xc);
    }
    if (iVar1 != 0) {
LAB_0060f515:
      iStack_40 = 0;
      iStack_44 = 0x60f51d;
      FUN_00449913();
    }
  }
  else {
LAB_0060f721:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_40 = 0x60f72d;
    FUN_0046575e();
  }
LAB_0060f72d:
  uVar2 = 0;
LAB_0060f72f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


