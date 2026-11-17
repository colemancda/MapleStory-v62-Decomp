/* FUN_007ece7a - 0x007ece7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ece7a(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int iVar5;
  int iVar6;
  int unaff_EBP;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 1) {
    if (*(int *)(extraout_ECX + 0x74) == 2) {
      uStack_1c = unaff_EBP + -0x14;
      iStack_20 = 0x7eceb7;
      FUN_0045b90e();
      uStack_1c = *(int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = 0;
      while( true ) {
        if (uStack_1c == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(uStack_1c + -4);
        }
        if (iVar5 <= iVar6) {
          iStack_20 = 0x7ecf5a;
          uVar7 = FUN_0087b6b6();
          iVar6 = (int)uVar7;
          if (((int)((ulonglong)uVar7 >> 0x20) == 0) && (-1 < iVar6)) {
            *(int *)(extraout_ECX + 0xbc) = iVar6;
            if (iVar6 < *(int *)(extraout_ECX + 0xb4)) {
              uStack_1c = 799;
              iStack_20 = unaff_EBP + 8;
              iStack_24 = 0x7ecf8c;
              puVar2 = (undefined4 *)FUN_00679d22();
              uStack_1c = *(undefined4 *)(extraout_ECX + 0xb4);
              iStack_20 = *puVar2;
              iStack_24 = unaff_EBP + -0x10;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              uStack_28 = 0x7ecfa2;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              uStack_1c = 0x7ecfb1;
              FUN_00414ebb();
              *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
            }
            else if (*(int *)(extraout_ECX + 0xb8) < iVar6) {
              uStack_1c = 800;
              iStack_20 = unaff_EBP + 8;
              iStack_24 = 0x7ecfdb;
              puVar2 = (undefined4 *)FUN_00679d22();
              uStack_1c = *(undefined4 *)(extraout_ECX + 0xb8);
              iStack_20 = *puVar2;
              iStack_24 = unaff_EBP + -0x10;
              *(undefined1 *)(unaff_EBP + -4) = 4;
              uStack_28 = 0x7ecff1;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              uStack_1c = 0x7ed000;
              FUN_00414ebb();
              *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
            }
            else {
              uStack_1c = unaff_EBP + -0x18;
              iStack_20 = 0x7ed01e;
              uStack_1c = FUN_0045b90e();
              *(undefined1 *)(unaff_EBP + -4) = 5;
              iStack_20 = 0x7ed030;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              uStack_1c = 0x7ed03c;
              FUN_00414ebb();
              if (*(int *)(extraout_ECX + 0xcc) == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)(*(int *)(extraout_ECX + 0xcc) + -4);
              }
              if (*(int *)(extraout_ECX + 0xc0) <= iVar6) {
                *(undefined1 *)(unaff_EBP + -4) = 0;
                uStack_1c = 0x7ed0a3;
                FUN_00414ebb();
                goto LAB_007ed0a3;
              }
              uStack_1c = 0x321;
              iStack_20 = unaff_EBP + 8;
              iStack_24 = 0x7ed064;
              puVar2 = (undefined4 *)FUN_00679d22();
              uStack_1c = *(undefined4 *)(extraout_ECX + 0xc0);
              iStack_20 = *puVar2;
              iStack_24 = unaff_EBP + -0x10;
              *(undefined1 *)(unaff_EBP + -4) = 6;
              uStack_28 = 0x7ed07a;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              uStack_1c = 0x7ed089;
              FUN_00414ebb();
              *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
            }
          }
          else {
            uStack_1c = 800;
            iStack_20 = unaff_EBP + 8;
            iStack_24 = 0x7ed10e;
            puVar2 = (undefined4 *)FUN_00679d22();
            uStack_1c = *(undefined4 *)(extraout_ECX + 0xb8);
            iStack_20 = *puVar2;
            iStack_24 = unaff_EBP + -0x10;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            uStack_28 = 0x7ed124;
            FUN_00434e21();
            *(undefined1 *)(unaff_EBP + -4) = 1;
            uStack_1c = 0x7ed133;
            FUN_00414ebb();
            *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
          }
          uStack_1c = 0;
          iStack_20 = 0;
          iStack_24 = 0;
          uStack_28 = 0;
          uVar8 = 0xffffffff;
          uVar4 = FUN_00449713(0xffffffff);
          FUN_0045f0f3(uVar4,uVar8);
          FUN_007db3ad();
          uStack_1c = -(uint)(*(int *)(extraout_ECX + 0x624) != 0) &
                      *(int *)(extraout_ECX + 0x624) + 4U;
          iStack_20 = 0x7ed174;
          FUN_00817f6e();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          uStack_1c = 0x7ed17f;
          FUN_00414ebb();
          goto LAB_007ed256;
        }
        cVar1 = *(char *)(iVar6 + uStack_1c);
        uStack_2c = CONCAT31((int3)((uint)iVar5 >> 8),cVar1);
        if ((cVar1 < '0') || ('9' < cVar1)) break;
        iVar6 = iVar6 + 1;
      }
      uStack_1c = 0;
      iStack_20 = 0;
      iStack_24 = 0;
      uStack_28 = 0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
      FUN_00679d22(&uStack_2c,0x31e);
      FUN_007db3ad();
      uStack_1c = -(uint)(*(int *)(extraout_ECX + 0x624) != 0) & *(int *)(extraout_ECX + 0x624) + 4U
      ;
      iStack_20 = 0x7ecf22;
      FUN_00817f6e();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        uStack_1c = *(int *)(unaff_EBP + -0x14) + -0xc;
        iStack_20 = 0x7ecf35;
        FUN_00434e38();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        uStack_1c = *(int *)(unaff_EBP + -0x10) + -0xc;
        iStack_20 = 0x7ecf4e;
        FUN_00434e38();
      }
      goto LAB_007ed262;
    }
LAB_007ed0a3:
    if (*(int *)(extraout_ECX + 0x74) != 3) {
LAB_007ed208:
      if (*(int *)(extraout_ECX + 0x74) == 8) {
        uStack_1c = unaff_EBP + -0x18;
        iStack_20 = 0x7ed21d;
        uStack_1c = FUN_00605efb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iStack_20 = 0x7ed22d;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uStack_1c = 0x7ed238;
        FUN_00414ebb();
      }
      goto LAB_007ed238;
    }
    uStack_1c = unaff_EBP + -0x18;
    iStack_20 = 0x7ed0bc;
    uStack_1c = FUN_0045b90e();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_20 = 0x7ed0ce;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_1c = 0x7ed0d9;
    FUN_00414ebb();
    uStack_1c = 0;
    iStack_20 = 0;
    iStack_24 = 0x7ed0e2;
    FUN_0045ed72();
    iStack_20 = 0x7ed0e9;
    piVar3 = (int *)FUN_0045ee27();
    if (*piVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*piVar3 + -4);
    }
    if (*(int *)(extraout_ECX + 0xc0) <= iVar6) goto LAB_007ed208;
    uStack_1c = 0x322;
    iStack_20 = unaff_EBP + 8;
    iStack_24 = 0x7ed1a1;
    puVar2 = (undefined4 *)FUN_00679d22();
    uStack_1c = *(undefined4 *)(extraout_ECX + 0xc0);
    iStack_20 = *puVar2;
    iStack_24 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_28 = 0x7ed1b7;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_1c = 0x7ed1c5;
    FUN_00414ebb();
    uStack_1c = 0;
    iStack_20 = 0;
    iStack_24 = 0;
    uStack_28 = 0;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_2c;
    uVar8 = 0xffffffff;
    uVar4 = FUN_00449713(0xffffffff);
    FUN_0045f0f3(uVar4,uVar8);
    FUN_007db3ad();
    uStack_1c = -(uint)(*(int *)(extraout_ECX + 0x624) != 0) & *(int *)(extraout_ECX + 0x624) + 4U;
    iStack_20 = 0x7ed206;
    FUN_00817f6e();
  }
  else {
LAB_007ed238:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        uStack_1c = 0x7ed256;
        FUN_00815de9();
      }
    }
  }
LAB_007ed256:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1c = 0x7ed262;
  FUN_00414ebb();
LAB_007ed262:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


