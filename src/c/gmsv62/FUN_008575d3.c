/* FUN_008575d3 - 0x008575d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008575d3(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  int unaff_EBP;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcStack_8c;
  int local_88;
  
  FUN_00879bb8();
  iVar9 = *(int *)(unaff_EBP + 8);
  local_88 = 0x8575ef;
  bVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (0x17 < bVar1) {
    if (bVar1 == 0x18) {
      local_88 = 0x857ffe;
      iVar3 = FUN_0042459a();
      local_88 = 0x858007;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      local_88 = 0x858011;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
      local_88 = 0x85801b;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
      local_88 = 0x858025;
      uVar4 = FUN_0042459a();
      iVar9 = *(int *)(extraout_ECX + 0x2cd2);
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      if ((iVar9 == iVar3) && (*(int *)(extraout_ECX + 0x2cac) != *(int *)(unaff_EBP + 8))) {
        iVar9 = 0;
        for (uVar5 = 0;
            (iVar3 = *(int *)(extraout_ECX + 0x2cf8), iVar3 != 0 && (uVar5 < *(uint *)(iVar3 + -4)))
            ; uVar5 = uVar5 + 1) {
          if (*(int *)(iVar3 + iVar9) == *(int *)(unaff_EBP + 8)) {
            iVar9 = *(int *)(extraout_ECX + 0x2cf8) + uVar5 * 0x2a;
            iVar3 = 0;
            goto LAB_00858067;
          }
          iVar9 = iVar9 + 0x2a;
        }
      }
    }
    else if (bVar1 == 0x19) {
      local_88 = 0x857ec1;
      iVar3 = FUN_0042459a();
      local_88 = 0x857eca;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
      local_88 = 0x857ed4;
      iVar7 = FUN_0042459a();
      iVar9 = *(int *)(extraout_ECX + 0x2cd2);
      *(int *)(unaff_EBP + -0x28) = iVar7;
      if (iVar9 == iVar3) {
        iVar9 = 0;
        while( true ) {
          iVar3 = 0;
          if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
            iVar3 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
          }
          if (iVar3 <= iVar9) break;
          if (*(int *)(*(int *)(extraout_ECX + 0x2cb8) + iVar9 * 4) == *(int *)(unaff_EBP + -0x10))
          goto LAB_00857f0a;
          iVar9 = iVar9 + 1;
        }
        iVar9 = -1;
LAB_00857f0a:
        if (-1 < iVar9) {
          *(undefined4 *)(*(int *)(extraout_ECX + 0x2cbc) + 0x21 + iVar9 * 0x25) = 2;
        }
        iVar9 = 0;
        while( true ) {
          iVar3 = 0;
          if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
            iVar3 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
          }
          if (iVar3 <= iVar9) break;
          if (*(int *)(*(int *)(extraout_ECX + 0x2cb8) + iVar9 * 4) == iVar7) goto LAB_00857f43;
          iVar9 = iVar9 + 1;
        }
        iVar9 = -1;
LAB_00857f43:
        if (-1 < iVar9) {
          *(undefined4 *)(*(int *)(extraout_ECX + 0x2cbc) + 0x21 + iVar9 * 0x25) = 1;
        }
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iVar9 = 0;
        while ((iVar3 = *(int *)(extraout_ECX + 0x2cf8), iVar3 != 0 &&
               (*(uint *)(unaff_EBP + 8) < *(uint *)(iVar3 + -4)))) {
          iVar3 = iVar3 + iVar9;
          iVar7 = 0;
          while( true ) {
            iVar10 = 0;
            if (*(int *)(iVar3 + 0xc) != 0) {
              iVar10 = *(int *)(*(int *)(iVar3 + 0xc) + -4);
            }
            if (iVar10 <= iVar7) break;
            if (*(int *)(*(int *)(iVar3 + 0xc) + iVar7 * 4) == *(int *)(unaff_EBP + -0x10))
            goto LAB_00857f9e;
            iVar7 = iVar7 + 1;
          }
          iVar7 = -1;
LAB_00857f9e:
          if (-1 < iVar7) {
            *(undefined4 *)(iVar7 * 0x25 + 0x21 + *(int *)(iVar3 + 0x10)) = 2;
          }
          iVar3 = *(int *)(extraout_ECX + 0x2cf8) + iVar9;
          iVar7 = 0;
          while( true ) {
            iVar10 = 0;
            if (*(int *)(iVar3 + 0xc) != 0) {
              iVar10 = *(int *)(*(int *)(iVar3 + 0xc) + -4);
            }
            if (iVar10 <= iVar7) break;
            if (*(int *)(*(int *)(iVar3 + 0xc) + iVar7 * 4) == *(int *)(unaff_EBP + -0x28))
            goto LAB_00857fda;
            iVar7 = iVar7 + 1;
          }
          iVar7 = -1;
LAB_00857fda:
          if (-1 < iVar7) {
            *(undefined4 *)(iVar7 * 0x25 + 0x21 + *(int *)(iVar3 + 0x10)) = 1;
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          iVar9 = iVar9 + 0x2a;
        }
      }
    }
    else if (bVar1 == 0x1a) {
      local_88 = 0x857e76;
      iVar9 = FUN_0042459a();
      if (*(int *)(extraout_ECX + 0x2cd2) == iVar9) {
        iVar9 = 0;
        do {
          local_88 = unaff_EBP + -0x2c;
          pcStack_8c = (char *)0x857e8f;
          local_88 = FUN_0045cdbc();
          *(undefined1 *)(unaff_EBP + -4) = 0x11;
          pcStack_8c = (char *)0x857ea1;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          local_88 = 0x857ead;
          FUN_00414ebb();
          iVar9 = iVar9 + 4;
        } while (iVar9 < 0x14);
      }
    }
    else if (bVar1 == 0x1b) {
      local_88 = 0x857dbf;
      iVar9 = FUN_0042459a();
      local_88 = 0x857dc8;
      uVar5 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x10) = uVar5 & 0xff;
      iVar3 = 0;
      while( true ) {
        iVar7 = 0;
        if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
        }
        if (iVar7 <= iVar3) break;
        if (*(int *)(*(int *)(extraout_ECX + 0x2cb8) + iVar3 * 4) == iVar9) goto LAB_00857df2;
        iVar3 = iVar3 + 1;
      }
      iVar3 = -1;
LAB_00857df2:
      if (iVar3 < 0) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        for (uVar5 = 0;
            (*(int *)(extraout_ECX + 0x2cf8) != 0 &&
            (uVar5 < *(uint *)(*(int *)(extraout_ECX + 0x2cf8) + -4))); uVar5 = uVar5 + 1) {
          iVar7 = *(int *)(unaff_EBP + 8) + *(int *)(extraout_ECX + 0x2cf8);
          iVar3 = 0;
          while( true ) {
            iVar10 = *(int *)(iVar7 + 0xc);
            iVar8 = 0;
            if (iVar10 != 0) {
              iVar8 = *(int *)(iVar10 + -4);
            }
            if (iVar8 <= iVar3) break;
            if (*(int *)(*(int *)(iVar7 + 0xc) + iVar3 * 4) == iVar9) goto LAB_00857e48;
            iVar3 = iVar3 + 1;
          }
          iVar3 = -1;
LAB_00857e48:
          if (-1 < iVar3) {
            iVar9 = *(int *)(uVar5 * 0x2a + 0x10 + *(int *)(extraout_ECX + 0x2cf8));
            goto LAB_00857e63;
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x2a;
        }
      }
      else {
        iVar9 = *(int *)(extraout_ECX + 0x2cbc);
LAB_00857e63:
        *(undefined4 *)(iVar9 + 0x21 + iVar3 * 0x25) = *(undefined4 *)(unaff_EBP + -0x10);
      }
    }
    else if (bVar1 == 0x1c) {
      local_88 = 0x857d7f;
      iVar3 = FUN_0042459a();
      local_88 = unaff_EBP + 8;
      pcStack_8c = (char *)0x857d8c;
      FUN_0045cdbc();
      iVar9 = *(int *)(extraout_ECX + 0x2cd2);
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (iVar9 == iVar3) {
        local_88 = unaff_EBP + 8;
        pcStack_8c = (char *)0x857da7;
        FUN_00414f8b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_88 = 0x857db3;
      FUN_00414ebb();
    }
    else if (bVar1 == 0x1d) {
      local_88 = 0x857d25;
      iVar9 = FUN_0042459a();
      if (*(int *)(extraout_ECX + 0x2cd2) == iVar9) {
        local_88 = 0x857d42;
        FUN_0083f06a();
        local_88 = 0x857d4d;
        FUN_0082f943();
        iVar9 = 0;
        *(undefined4 *)(extraout_ECX + 0x2cd2) = 0;
        iVar3 = 0;
        while( true ) {
          iVar7 = 0;
          if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
            iVar7 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
          }
          if (iVar7 <= iVar3) break;
          *(undefined4 *)(*(int *)(extraout_ECX + 0x2cbc) + 0x21 + iVar9) = 3;
          iVar3 = iVar3 + 1;
          iVar9 = iVar9 + 0x25;
        }
      }
    }
    else if (bVar1 == 0x1e) {
      local_88 = 0x857caa;
      iVar3 = FUN_0042459a();
      local_88 = 0x857cb3;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      local_88 = 0x857cc1;
      FUN_0082f882();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      local_88 = 0x857cd0;
      FUN_0082f8bf();
      pcStack_8c = (char *)0x857cdc;
      local_88 = iVar9;
      FUN_004b66a8();
      if (*(int *)(extraout_ECX + 0x2cd2) == iVar3) {
        local_88 = unaff_EBP + -0x84;
        if (*(int *)(extraout_ECX + 0x2cac) == *(int *)(unaff_EBP + 8)) {
          pcStack_8c = (char *)0x857d01;
          FUN_00858137();
        }
        else {
          pcStack_8c = (char *)0x857d0a;
          FUN_00858384();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_88 = 0x857d19;
      FUN_0082f98f();
    }
    goto LAB_008580a8;
  }
  if (bVar1 == 0x17) {
    local_88 = 0x857c30;
    FUN_0082f909();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    local_88 = 0x857c3c;
    FUN_0082f943();
    pcStack_8c = (char *)0x857c45;
    local_88 = iVar9;
    FUN_004b68af();
    if (*(int *)(extraout_ECX + 0x2ce0) == *(int *)(unaff_EBP + -0x48)) {
      local_88 = unaff_EBP + -0x48;
      pcStack_8c = (char *)0x857c5f;
      FUN_008580ee();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (bVar1 == 3) {
      local_88 = 0x857b00;
      iVar3 = FUN_0042459a();
      local_88 = unaff_EBP + 8;
      pcStack_8c = (char *)0x857b0d;
      FUN_0045cdbc();
      local_88 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      pcStack_8c = (char *)0x857b1c;
      FUN_0045cdbc();
      iVar9 = *(int *)(DAT_00978134 + 0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (iVar9 == 0) {
LAB_00857b85:
        local_88 = 0;
        pcStack_8c = (char *)0x0;
        uVar4 = FUN_0060142b(0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        local_88 = CONCAT31((int3)((uint)uVar4 >> 8),iVar9 != 0) + 0x14;
        pcStack_8c = (char *)0x857bab;
        FUN_00457cda();
        pcStack_8c = (char *)(unaff_EBP + 8);
        *(int **)(unaff_EBP + -0x24) = &local_88;
        local_88 = 0;
        FUN_00414f8b();
        pcStack_8c = (char *)0x857bc4;
        FUN_00459cb5();
        pcStack_8c = (char *)&local_88;
        *(int **)(unaff_EBP + -0x24) = &local_88;
        FUN_004dee9b();
        pcStack_8c = (char *)0x857bda;
        FUN_00459cb5();
        local_88 = unaff_EBP + -0x40;
        pcStack_8c = (char *)0x857be9;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        local_88 = 0x857bf5;
        FUN_0045ebca();
      }
      else {
        local_88 = 5;
        pcStack_8c = (char *)0x857b35;
        iVar7 = FUN_00849a47();
        if (iVar7 != 0) goto LAB_00857b85;
        local_88 = 0x110;
        pcStack_8c = (char *)0x857b48;
        iVar9 = FUN_004029b9();
        *(int *)(unaff_EBP + -0x24) = iVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          local_88 = 0x857b5a;
          iVar9 = FUN_004defeb();
        }
        *(char ***)(unaff_EBP + -0x24) = &pcStack_8c;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        local_88 = iVar3;
        FUN_00450368(unaff_EBP + 8);
        FUN_004e1a82();
        pcStack_8c = (char *)0x857b83;
        local_88 = iVar9;
        FUN_008497ad();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        local_88 = *(int *)(unaff_EBP + -0x28) + -0xc;
        pcStack_8c = (char *)0x857c09;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + 8) != 0) {
        local_88 = *(int *)(unaff_EBP + 8) + -0xc;
        pcStack_8c = (char *)0x857c22;
        FUN_00434e38();
      }
      goto LAB_008580a8;
    }
    if (bVar1 == 0xc) {
      local_88 = 0x857ad6;
      FUN_0082f943();
      local_88 = 0x857add;
      cVar2 = FUN_0042452b();
      *(uint *)(unaff_EBP + 8) = (uint)(cVar2 != '\0');
      if ((cVar2 != '\0') != 0) {
        pcStack_8c = (char *)0x857af4;
        local_88 = iVar9;
        FUN_004b68af();
      }
      goto LAB_008580a8;
    }
    if (bVar1 == 0xd) {
      local_88 = 0x857a74;
      iVar3 = FUN_0042459a();
      if (0 < iVar3) {
        do {
          local_88 = 0x857a89;
          FUN_0082f882();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          local_88 = 0x857a98;
          FUN_0082f8bf();
          pcStack_8c = (char *)0x857aa4;
          local_88 = iVar9;
          FUN_004b66a8();
          local_88 = unaff_EBP + -0x84;
          pcStack_8c = (char *)0x857ab2;
          FUN_00858384();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          local_88 = 0x857ac1;
          FUN_0082f98f();
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      goto LAB_008580a8;
    }
    if (bVar1 == 0xe) {
      local_88 = 0x85791c;
      FUN_0042459a();
      local_88 = 0x857923;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      local_88 = 0x85792d;
      iVar3 = FUN_0042459a();
      *(int *)(unaff_EBP + -0x20) = iVar3;
      local_88 = 0x857939;
      bVar1 = FUN_0042452b();
      iVar9 = *(int *)(extraout_ECX + 0x2088);
      uVar5 = (uint)bVar1;
      *(uint *)(unaff_EBP + -0x28) = uVar5;
      if (iVar3 != iVar9) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        while ((iVar9 = *(int *)(extraout_ECX + 0x2cf8), iVar9 != 0 &&
               (*(uint *)(unaff_EBP + 8) < *(uint *)(iVar9 + -4)))) {
          piVar6 = (int *)(iVar9 + *(int *)(unaff_EBP + -0x10));
          if (*(int *)(unaff_EBP + -0x1c) == *piVar6) {
            iVar9 = 0;
            while( true ) {
              iVar3 = 0;
              if (piVar6[3] != 0) {
                iVar3 = *(int *)(piVar6[3] + -4);
              }
              if (iVar3 <= iVar9) break;
              if (*(int *)(piVar6[3] + iVar9 * 4) == *(int *)(unaff_EBP + -0x20)) goto LAB_008579a7;
              iVar9 = iVar9 + 1;
            }
            iVar9 = -1;
LAB_008579a7:
            if (iVar9 == -1) {
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (*(int *)(unaff_EBP + -0x14) != 0) {
                local_88 = *(int *)(unaff_EBP + -0x14) + -0xc;
                pcStack_8c = (char *)0x857a4e;
                FUN_00434e38();
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (*(int *)(unaff_EBP + -0x18) != 0) {
                local_88 = *(int *)(unaff_EBP + -0x18) + -0xc;
                pcStack_8c = (char *)0x857a67;
                FUN_00434e38();
              }
              goto LAB_008580dd;
            }
            *(uint *)(piVar6[4] + 0x19 + iVar9 * 0x25) = uVar5;
            if (uVar5 != 0) {
              local_88 = 0x110;
              pcStack_8c = (char *)0x8579cf;
              iVar3 = FUN_004029b9();
              *(int *)(unaff_EBP + -0x24) = iVar3;
              *(undefined1 *)(unaff_EBP + -4) = 3;
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                local_88 = 0x8579e1;
                iVar3 = FUN_004defeb();
              }
              local_88 = 0;
              *(char ***)(unaff_EBP + -0x24) = &pcStack_8c;
              uVar11 = 0xffffffff;
              *(undefined1 *)(unaff_EBP + -4) = 1;
              *(char ***)(unaff_EBP + -0x24) = &pcStack_8c;
              FUN_008588fd(*(undefined4 *)(unaff_EBP + 8));
              uVar4 = FUN_008588f1(iVar9);
              FUN_0045f0f3(uVar4,uVar11);
              FUN_004e1c6a();
              pcStack_8c = (char *)0x857a2b;
              local_88 = iVar3;
              FUN_008497ad();
              uVar5 = *(uint *)(unaff_EBP + -0x28);
            }
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x2a;
        }
      }
      goto LAB_008580a8;
    }
    if (bVar1 == 0xf) {
      local_88 = 0x8578b0;
      FUN_0082f943();
      pcStack_8c = (char *)0x8578b8;
      local_88 = iVar9;
      FUN_004b68af();
      iVar3 = 0;
      while( true ) {
        iVar7 = 0;
        if (*(int *)(extraout_ECX + 0x2cec) != 0) {
          iVar7 = *(int *)(*(int *)(extraout_ECX + 0x2cec) + -4);
        }
        if (iVar7 <= iVar3) break;
        local_88 = 0x8578da;
        FUN_0082f882();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        local_88 = 0x8578e9;
        FUN_0082f8bf();
        pcStack_8c = (char *)0x8578f5;
        local_88 = iVar9;
        FUN_004b66a8();
        local_88 = unaff_EBP + -0x84;
        pcStack_8c = (char *)0x857903;
        FUN_00858384();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_88 = 0x857912;
        FUN_0082f98f();
        iVar3 = iVar3 + 1;
      }
      goto LAB_008580a8;
    }
    if (bVar1 == 0x10) {
      local_88 = 0x8577a7;
      FUN_0082f909();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      pcStack_8c = (char *)0x8577b4;
      local_88 = iVar9;
      FUN_004b68af();
      local_88 = 0x8577bb;
      uVar4 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      if (*(int *)(extraout_ECX + 0x2ce0) == *(int *)(unaff_EBP + -0x74)) {
        if (*(int *)(unaff_EBP + 8) == *(int *)(extraout_ECX + 0x2cac)) {
          local_88 = 0x8577e5;
          FUN_0082f943();
          local_88 = 0x8577f0;
          FUN_0083f06a();
          pcStack_8c = (char *)0x8577f8;
          local_88 = iVar9;
          FUN_004b66a8();
          local_88 = 0x8577ff;
          cVar2 = FUN_0042452b();
          *(undefined4 *)(unaff_EBP + 8) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          local_88 = -1;
          if (cVar2 == '\0') {
            pcStack_8c = s_You_leaved_the_guild_alliance__0096ca6c;
          }
          else {
            pcStack_8c = s_You_are_dismissed_from_the_guild_0096ca8c;
          }
          FUN_00414edd();
          pcStack_8c = (char *)(unaff_EBP + 8);
          local_88 = 0xc;
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + 8) != 0) {
            local_88 = *(int *)(unaff_EBP + 8) + -0xc;
            pcStack_8c = (char *)0x857845;
            FUN_00434e38();
          }
        }
        else {
          local_88 = unaff_EBP + -0x74;
          pcStack_8c = (char *)0x857851;
          FUN_008580ee();
          uVar5 = 0;
          iVar9 = 0;
          while( true ) {
            iVar3 = *(int *)(extraout_ECX + 0x2cf8);
            if ((iVar3 == 0) || (*(uint *)(iVar3 + -4) <= uVar5)) goto LAB_00857883;
            if (*(int *)(iVar9 + iVar3) == *(int *)(unaff_EBP + 8)) break;
            uVar5 = uVar5 + 1;
            iVar9 = iVar9 + 0x2a;
          }
          if (-1 < (int)uVar5) {
            local_88 = uVar5 * 0x2a + *(int *)(extraout_ECX + 0x2cf8);
            pcStack_8c = (char *)0x857883;
            FUN_0085889d();
          }
        }
      }
LAB_00857883:
      if (DAT_0097bef4 != 0) {
        local_88 = 0x857897;
        FUN_0077e45e();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      if (bVar1 != 0x12) goto LAB_008580a8;
      local_88 = 0x857650;
      FUN_0082f909();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      local_88 = 0x85765c;
      FUN_0082f943();
      pcStack_8c = (char *)0x857665;
      local_88 = iVar9;
      FUN_004b68af();
      local_88 = 0x85766c;
      iVar3 = FUN_0042459a();
      local_88 = unaff_EBP + -0x74;
      pcStack_8c = (char *)0x85767d;
      FUN_008580ee();
      if (iVar3 == *(int *)(extraout_ECX + 0x2cac)) {
        pcStack_8c = (char *)0x857695;
        local_88 = iVar9;
        FUN_004b66a8();
        *(undefined4 *)(unaff_EBP + 8) = 0;
        local_88 = *(int *)(extraout_ECX + 0x2ce4);
        pcStack_8c = s_You_joined___s__guild_alliance__0096cae4;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_00434e21(unaff_EBP + 8);
        FUN_00471102(unaff_EBP + 8,0xc);
        local_88 = 0;
        pcStack_8c = (char *)0x0;
        FUN_0060142b(0x83);
        local_88 = 1;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        pcStack_8c = (char *)0x8576dd;
        FUN_00457cda();
        local_88 = unaff_EBP + -0x40;
        pcStack_8c = (char *)0x8576ec;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        local_88 = 0x8576f8;
        FUN_0045ebca();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (*(int *)(unaff_EBP + 8) != 0) {
          local_88 = *(int *)(unaff_EBP + 8) + -0xc;
          pcStack_8c = (char *)0x85770c;
          FUN_00434e38();
        }
      }
      else {
        local_88 = 0x857717;
        FUN_0082f882();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        local_88 = 0x857723;
        FUN_0082f8bf();
        pcStack_8c = (char *)0x85772c;
        local_88 = iVar9;
        FUN_004b66a8();
        local_88 = unaff_EBP + -0x58;
        pcStack_8c = (char *)0x857737;
        FUN_00858384();
        *(undefined4 *)(unaff_EBP + 8) = 0;
        local_88 = *(int *)(unaff_EBP + -0x54);
        pcStack_8c = s___s__guild_joined_in_your_guild_a_0096cab8;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00434e21(unaff_EBP + 8);
        FUN_00471102(unaff_EBP + 8,0xc);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + 8) != 0) {
          local_88 = *(int *)(unaff_EBP + 8) + -0xc;
          pcStack_8c = (char *)0x857772;
          FUN_00434e38();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        local_88 = 0x85777f;
        FUN_0082f98f();
      }
      if (DAT_0097bef4 != 0) {
        local_88 = 0x857793;
        FUN_0077e45e();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  local_88 = 0x857c6b;
  FUN_0082f9ec();
LAB_008580a8:
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
    local_88 = 0x8580c5;
    FUN_0077e45e();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_88 = 0x8580d1;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_88 = 0x8580dd;
  FUN_00414ebb();
LAB_008580dd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
LAB_00858067:
  iVar7 = 0;
  if (*(int *)(iVar9 + 0xc) != 0) {
    iVar7 = *(int *)(*(int *)(iVar9 + 0xc) + -4);
  }
  if (iVar3 < iVar7) {
    if (*(int *)(*(int *)(iVar9 + 0xc) + iVar3 * 4) == *(int *)(unaff_EBP + -0x28))
    goto LAB_00858086;
    iVar3 = iVar3 + 1;
    goto LAB_00858067;
  }
  iVar3 = -1;
LAB_00858086:
  if (-1 < iVar3) {
    *(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x11 + iVar3 * 0x25) =
         *(undefined4 *)(unaff_EBP + -0x24);
    *(undefined4 *)
     (*(int *)(*(int *)(extraout_ECX + 0x2cf8) + 0x10 + uVar5 * 0x2a) + 0xd + iVar3 * 0x25) =
         *(undefined4 *)(unaff_EBP + -0x20);
  }
  goto LAB_008580a8;
}


