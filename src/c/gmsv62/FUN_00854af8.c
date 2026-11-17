/* FUN_00854af8 - 0x00854af8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00854af8(void)

{
  char *pcVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined *extraout_ECX_02;
  int unaff_EBP;
  uint uVar16;
  bool bVar17;
  undefined4 uStack_134;
  int *piStack_130;
  int iStack_12c;
  int iStack_128;
  undefined *puStack_124;
  undefined1 *local_120;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  puVar15 = *(undefined1 **)(unaff_EBP + 8);
  local_120 = (undefined1 *)0x854b1b;
  bVar3 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar3 < 0x33) {
    if (bVar3 == 0x32) {
      iVar8 = *(int *)(extraout_ECX + 0x2cac);
      local_120 = (undefined1 *)0x855768;
      iVar13 = FUN_0042459a();
      if (iVar13 != iVar8) goto LAB_00856438;
      if ((iVar8 == 0) || (**(int **)(extraout_ECX + 0x2cb8) != *(int *)(extraout_ECX + 0x2088))) {
        local_120 = (undefined1 *)0x169;
        puStack_124 = (undefined *)(unaff_EBP + -0x94);
        iStack_128 = 0x8557fe;
        puStack_124 = (undefined *)FUN_00679d22();
        local_120 = (undefined1 *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        iStack_128 = 0x85580a;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x94) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x94) + -0xc);
          puStack_124 = (undefined *)0x855823;
          FUN_00434e38();
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        local_120 = (undefined1 *)0xc85;
        puStack_124 = (undefined *)(unaff_EBP + -0x3c);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        iStack_128 = 0x85579f;
        local_120 = (undefined1 *)FUN_00679d22();
        puStack_124 = (undefined *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iStack_128 = 0x8557ae;
        FUN_004655d4();
        puStack_124 = (undefined *)0x8557b5;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x3c) + -0xc);
          puStack_124 = (undefined *)0x8557c9;
          FUN_00434e38();
        }
        local_120 = (undefined1 *)0x1eab97;
        puStack_124 = (undefined *)(unaff_EBP + -0x20);
        iStack_128 = 0x8557da;
        FUN_00856a7c();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_120 = (undefined1 *)0x8557e6;
        FUN_0045f10c();
      }
      local_120 = (undefined1 *)0x85582f;
      FUN_0082f8bf();
      goto LAB_0085627a;
    }
    if (bVar3 < 0x25) {
      if (bVar3 == 0x24) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        local_120 = (undefined1 *)0xc82;
        puStack_124 = (undefined *)(unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iStack_128 = 0x855251;
        local_120 = (undefined1 *)FUN_00679d22();
        puStack_124 = (undefined *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        iStack_128 = 0x855260;
        FUN_004655d4();
        puStack_124 = (undefined *)0x855267;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (*(int *)(unaff_EBP + -0x54) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x54) + -0xc);
          puStack_124 = (undefined *)0x85527b;
          FUN_00434e38();
        }
        local_120 = (undefined1 *)0x1eab97;
        puStack_124 = (undefined *)(unaff_EBP + -0x1c);
        iStack_128 = 0x85528c;
        FUN_00856a7c();
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else if (bVar3 < 0x1d) {
        if (bVar3 != 0x1c) {
          if (bVar3 == 1) {
            local_120 = (undefined1 *)0x854fca;
            FUN_00429303();
            local_120 = (undefined1 *)0x854fd1;
            FUN_004ea564();
          }
          else if (bVar3 == 3) {
            if ((*(int *)(DAT_00978368 + 0x2b40) == 0) ||
               (*(int *)(DAT_00978368 + 0x2bf2) != *(int *)(DAT_00978368 + 0x2088))) {
              local_120 = (undefined1 *)0x854edd;
              iVar8 = FUN_0042459a();
              if (iVar8 == *(int *)(extraout_ECX + 0x2b40)) {
                local_120 = (undefined1 *)(unaff_EBP + -0x20);
                puStack_124 = (undefined *)0x854ef4;
                FUN_0045cdbc();
                local_120 = (undefined1 *)(unaff_EBP + -0x10);
                *(undefined1 *)(unaff_EBP + -4) = 6;
                puStack_124 = (undefined *)0x854f03;
                FUN_0045cdbc();
                local_120 = (undefined1 *)0xac;
                *(undefined1 *)(unaff_EBP + -4) = 7;
                puStack_124 = (undefined *)0x854f16;
                iVar8 = FUN_004029b9();
                *(int *)(unaff_EBP + -0x1c) = iVar8;
                *(undefined1 *)(unaff_EBP + -4) = 8;
                if (iVar8 == 0) {
                  iVar8 = 0;
                }
                else {
                  local_120 = (undefined1 *)0x0;
                  puStack_124 = (undefined *)(unaff_EBP + -0x10);
                  *(undefined1 ***)(unaff_EBP + -0x18) = &local_120;
                  iStack_128 = 0x854f33;
                  FUN_00414f8b();
                  iStack_128 = unaff_EBP + -0x20;
                  *(undefined ***)(unaff_EBP + -0x24) = &puStack_124;
                  *(undefined1 *)(unaff_EBP + -4) = 9;
                  iStack_12c = 0x854f46;
                  puStack_124 = extraout_ECX_02;
                  FUN_00450368();
                  *(undefined1 *)(unaff_EBP + -4) = 8;
                  iStack_128 = 0x854f52;
                  iVar8 = FUN_0051fa51();
                }
                uVar16 = -(uint)(iVar8 != 0) & iVar8 + 8U;
                *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar16 != 0) & uVar16 - 8;
                *(undefined1 *)(unaff_EBP + -4) = 7;
                local_120 = (undefined1 *)0x854f79;
                FUN_00858558();
                *(undefined1 *)(unaff_EBP + -4) = 10;
                local_120 = (undefined1 *)0x854f85;
                iVar8 = FUN_004bc6a2();
                local_120 = (undefined1 *)(uint)(iVar8 == 1);
                puStack_124 = (undefined *)0x854f91;
                FUN_00429303();
                puStack_124 = (undefined *)0x854f98;
                FUN_004ea61c();
                *(undefined1 *)(unaff_EBP + -4) = 7;
                local_120 = (undefined1 *)0x854fa4;
                FUN_00858575();
                *(undefined1 *)(unaff_EBP + -4) = 6;
                if (*(int *)(unaff_EBP + -0x10) != 0) {
                  local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
                  puStack_124 = (undefined *)0x854fb8;
                  FUN_00434e38();
                }
                iVar8 = *(int *)(unaff_EBP + -0x20);
                *(undefined1 *)(unaff_EBP + -4) = 1;
                goto LAB_0085642a;
              }
            }
            else {
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              local_120 = (undefined1 *)0xc81;
              puStack_124 = (undefined *)(unaff_EBP + -0xc4);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              iStack_128 = 0x854e87;
              local_120 = (undefined1 *)FUN_00679d22();
              puStack_124 = (undefined *)0xffffffff;
              *(undefined1 *)(unaff_EBP + -4) = 5;
              iStack_128 = 0x854e96;
              FUN_004655d4();
              puStack_124 = (undefined *)0x854e9d;
              FUN_00414f8b();
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (*(int *)(unaff_EBP + -0xc4) != 0) {
                local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xc4) + -0xc);
                puStack_124 = (undefined *)0x854eb4;
                FUN_00434e38();
              }
              local_120 = (undefined1 *)0x1eab97;
              puStack_124 = (undefined *)(unaff_EBP + -0x1c);
              iStack_128 = 0x854ec5;
              FUN_00856a7c();
              *(undefined1 *)(unaff_EBP + -4) = 1;
              local_120 = (undefined1 *)0x854ed1;
              FUN_0045f10c();
            }
          }
          else {
            if (bVar3 == 5) {
              local_120 = (undefined1 *)0x854cee;
              uVar9 = FUN_0042459a();
              *(undefined4 *)(unaff_EBP + -0x20) = uVar9;
              local_120 = (undefined1 *)(unaff_EBP + -0x18);
              puStack_124 = (undefined *)0x854cfc;
              FUN_0045cdbc();
              puVar15 = *(undefined1 **)(DAT_00978134 + 0x38);
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              if (puVar15 == (undefined1 *)0x0) {
LAB_00854d98:
                local_120 = (undefined1 *)0x0;
                puStack_124 = (undefined *)0x0;
                iStack_128 = 0x73;
                iStack_12c = 0x854da4;
                FUN_0060142b();
                local_120 = (undefined1 *)0x7;
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                puStack_124 = (undefined *)0x854db1;
                iVar8 = FUN_00849a47();
                local_120 = (undefined1 *)(CONCAT31((int3)((uint)iVar8 >> 8),iVar8 != 0) + 0x35);
                puStack_124 = (undefined *)0x854dc2;
                FUN_00457cda();
                puStack_124 = (undefined *)(unaff_EBP + -0x18);
                *(undefined1 ***)(unaff_EBP + -0x10) = &local_120;
                local_120 = (undefined1 *)0x0;
                iStack_128 = 0x854dd3;
                FUN_00414f8b();
                puStack_124 = (undefined *)0x854ddb;
                FUN_00459cb5();
                local_120 = (undefined1 *)0x854de2;
                iStack_128 = FUN_00485c13();
                *(undefined1 ***)(unaff_EBP + -0x10) = &local_120;
                puStack_124 = (undefined *)0xffffffff;
                local_120 = (undefined1 *)0x0;
                iStack_12c = 0x854df2;
                FUN_00414edd();
                puStack_124 = (undefined *)0x854dfa;
                FUN_00459cb5();
                local_120 = (undefined1 *)(unaff_EBP + -0x38);
                puStack_124 = (undefined *)0x854e09;
                FUN_004751b2();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                local_120 = (undefined1 *)0x854e15;
                FUN_0045ebca();
              }
              else {
                puStack_124 = (undefined *)(unaff_EBP + -0x18);
                *(undefined1 ***)(unaff_EBP + -0x10) = &local_120;
                local_120 = (undefined1 *)0x0;
                iStack_128 = 0x854d23;
                FUN_00414f8b();
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                puStack_124 = (undefined *)0x854d2c;
                FUN_004f14ee();
                puStack_124 = (undefined *)0x854d33;
                iVar8 = FUN_0047c5bf();
                if (iVar8 != 0) goto LAB_00854d98;
                local_120 = (undefined1 *)0x7;
                puStack_124 = (undefined *)0x854d40;
                iVar8 = FUN_00849a47();
                if (iVar8 != 0) goto LAB_00854d98;
                local_120 = (undefined1 *)0x110;
                puStack_124 = (undefined *)0x854d53;
                iVar8 = FUN_004029b9();
                *(int *)(unaff_EBP + -0x10) = iVar8;
                *(undefined1 *)(unaff_EBP + -4) = 0xd;
                if (iVar8 == 0) {
                  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
                  iStack_128 = extraout_ECX_00;
                }
                else {
                  local_120 = (undefined1 *)0x854d65;
                  uVar9 = FUN_004defeb();
                  *(undefined4 *)(unaff_EBP + -0x1c) = uVar9;
                  iStack_128 = extraout_ECX_01;
                }
                puStack_124 = *(undefined **)(unaff_EBP + -0x20);
                iStack_12c = unaff_EBP + -0x18;
                *(int **)(unaff_EBP + -0x10) = &iStack_128;
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                piStack_130 = (int *)0x854d84;
                local_120 = puVar15;
                FUN_00450368();
                iStack_12c = 0x854d8c;
                FUN_004e1891();
                local_120 = *(undefined1 **)(unaff_EBP + -0x1c);
                puStack_124 = (undefined *)0x854d96;
                FUN_008497ad();
              }
              *(undefined1 *)(unaff_EBP + -4) = 1;
              if (*(int *)(unaff_EBP + -0x18) != 0) {
                local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
                puStack_124 = (undefined *)0x854e29;
                FUN_00434e38();
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (*(int *)(unaff_EBP + 8) != 0) {
                local_120 = (undefined1 *)(*(int *)(unaff_EBP + 8) + -0xc);
                puStack_124 = (undefined *)0x854e3e;
                FUN_00434e38();
              }
              iVar8 = *(int *)(unaff_EBP + -0x14);
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              bVar17 = iVar8 == 0;
              goto LAB_00856456;
            }
            if (bVar3 != 0x11) {
              if (bVar3 == 0x1a) {
                local_120 = (undefined1 *)0x854b90;
                FUN_0082f8bf();
                local_120 = (undefined1 *)0x854b97;
                cVar4 = FUN_0042452b();
                *(uint *)(unaff_EBP + -0x10) = (uint)(cVar4 != '\0');
                if ((cVar4 != '\0') != 0) {
                  puStack_124 = (undefined *)0x854baa;
                  local_120 = puVar15;
                  FUN_004b66a8();
                }
                uVar16 = 0;
                if (*(int *)(extraout_ECX + 0x2cd2) != 0) {
                  local_120 = (undefined1 *)0x0;
                  puStack_124 = (undefined *)0x0;
                  iStack_128 = 0x83;
                  iStack_12c = 0x854bc3;
                  FUN_0060142b();
                  local_120 = (undefined1 *)0x1;
                  *(undefined1 *)(unaff_EBP + -4) = 0x15;
                  puStack_124 = (undefined *)0x854bd1;
                  FUN_00457cda();
                  local_120 = (undefined1 *)(unaff_EBP + -0x38);
                  puStack_124 = (undefined *)0x854be0;
                  FUN_004751b2();
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  local_120 = (undefined1 *)0x854bec;
                  FUN_0045ebca();
                }
                uVar7 = 0xffffffff;
                *(undefined4 *)(unaff_EBP + -0x18) = 0;
                for (; (iVar8 = *(int *)(extraout_ECX + 0x2cf8), iVar8 != 0 &&
                       (uVar16 < *(uint *)(iVar8 + -4))); uVar16 = uVar16 + 1) {
                  if (*(int *)(iVar8 + *(int *)(unaff_EBP + -0x18)) ==
                      *(int *)(extraout_ECX + 0x2cac)) {
                    uVar7 = uVar16;
                  }
                  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x2a;
                }
                if (-1 < (int)uVar7) {
                  local_120 = (undefined1 *)(uVar7 * 0x2a + *(int *)(extraout_ECX + 0x2cf8));
                  puStack_124 = (undefined *)0x854c2d;
                  FUN_0085889d();
                }
                goto LAB_0085627a;
              }
              goto switchD_008552a4_caseD_2b;
            }
            if ((*(int *)(extraout_ECX + 0x2cac) == 0) ||
               (**(int **)(extraout_ECX + 0x2cb8) != *(int *)(extraout_ECX + 0x2088)))
            goto LAB_008565d9;
            local_120 = (undefined1 *)0x11c;
            puStack_124 = (undefined *)0x854c62;
            iVar8 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x10) = iVar8;
            *(undefined1 *)(unaff_EBP + -4) = 2;
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              local_120 = (undefined1 *)0x854c74;
              iVar8 = FUN_00520b36();
            }
            uVar16 = -(uint)(iVar8 != 0) & iVar8 + 8U;
            *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar16 != 0) & uVar16 - 8;
            *(undefined1 *)(unaff_EBP + -4) = 1;
            local_120 = (undefined1 *)0x854c9b;
            FUN_00858525();
            *(undefined1 *)(unaff_EBP + -4) = 3;
            local_120 = (undefined1 *)0x854ca7;
            iVar8 = FUN_004bc6a2();
            if (iVar8 == 1) {
              iVar8 = *(int *)(unaff_EBP + -0x24);
              local_120 = *(undefined1 **)(iVar8 + 0xf0);
              puStack_124 = *(undefined **)(iVar8 + 0xec);
              iStack_128 = *(int *)(iVar8 + 0xe8);
              iStack_12c = *(int *)(iVar8 + 0xe4);
              piStack_130 = (int *)0x854ccf;
              FUN_00429303();
              piStack_130 = (int *)0x854cd6;
              FUN_004eaed3();
            }
            *(undefined1 *)(unaff_EBP + -4) = 1;
            local_120 = (undefined1 *)0x854ce2;
            FUN_00858542();
          }
          goto LAB_00856438;
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        local_120 = (undefined1 *)0xc83;
        puStack_124 = (undefined *)(unaff_EBP + -0xe8);
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_128 = 0x854ff4;
        local_120 = (undefined1 *)FUN_00679d22();
        puStack_124 = (undefined *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iStack_128 = 0x855003;
        FUN_004655d4();
        puStack_124 = (undefined *)0x85500a;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int *)(unaff_EBP + -0xe8) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xe8) + -0xc);
          puStack_124 = (undefined *)0x855021;
          FUN_00434e38();
        }
        local_120 = (undefined1 *)0x1eab97;
        puStack_124 = (undefined *)(unaff_EBP + -0x1c);
        iStack_128 = 0x855032;
        FUN_00856a7c();
        local_120 = (undefined1 *)0x855037;
        FUN_00429303();
        local_120 = (undefined1 *)0x85503e;
        FUN_004ea564();
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        if (bVar3 != 0x1f) {
          if (bVar3 == 0x20) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            local_120 = (undefined1 *)0x8550d6;
            FUN_0082f8bf();
            puStack_124 = (undefined *)0x8550de;
            local_120 = puVar15;
            FUN_004b66a8();
            if (**(int **)(extraout_ECX + 0x2cb8) == *(int *)(extraout_ECX + 0x2088)) {
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
              local_120 = (undefined1 *)0xc84;
              puStack_124 = (undefined *)(unaff_EBP + -0xcc);
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              iStack_128 = 0x855110;
              puVar10 = (undefined4 *)FUN_00679d22();
              local_120 = *(undefined1 **)(extraout_ECX + 0x2cb0);
              puStack_124 = (undefined *)*puVar10;
              iStack_128 = unaff_EBP + -0x18;
              *(undefined1 *)(unaff_EBP + -4) = 0x1a;
              iStack_12c = 0x855126;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              if (*(int *)(unaff_EBP + -0xcc) != 0) {
                local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xcc) + -0xc);
                puStack_124 = (undefined *)0x855140;
                FUN_00434e38();
              }
              local_120 = (undefined1 *)(unaff_EBP + -0x18);
              puStack_124 = (undefined *)0xffffffff;
              iStack_128 = 0x85514f;
              FUN_004655d4();
              puStack_124 = (undefined *)0x855156;
              FUN_00414f8b();
              local_120 = (undefined1 *)0x1eab97;
              puStack_124 = (undefined *)(unaff_EBP + -0x1c);
              iStack_128 = 0x855166;
              FUN_00856a7c();
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              local_120 = (undefined1 *)0x855172;
              FUN_0045f10c();
            }
            else {
              local_120 = (undefined1 *)0x15f;
              puStack_124 = (undefined *)(unaff_EBP + -0x4c);
              iStack_128 = 0x855187;
              puVar10 = (undefined4 *)FUN_00679d22();
              local_120 = *(undefined1 **)(extraout_ECX + 0x2cb0);
              puStack_124 = (undefined *)*puVar10;
              iStack_128 = unaff_EBP + -0x18;
              *(undefined1 *)(unaff_EBP + -4) = 0x1b;
              iStack_12c = 0x85519d;
              FUN_00434e21();
              *(undefined1 *)(unaff_EBP + -4) = 0x18;
              if (*(int *)(unaff_EBP + -0x4c) != 0) {
                local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x4c) + -0xc);
                puStack_124 = (undefined *)0x8551b4;
                FUN_00434e38();
              }
              puStack_124 = (undefined *)(unaff_EBP + -0x18);
              local_120 = (undefined1 *)0xc;
              iStack_128 = 0x8551c0;
              FUN_00471102();
            }
            iVar8 = *(int *)(unaff_EBP + -0x18);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            goto LAB_00855e95;
          }
          if (bVar3 == 0x21) {
            local_120 = (undefined1 *)0x16c;
            puStack_124 = (undefined *)(unaff_EBP + -0x44);
            iStack_128 = 0x8550a7;
            puStack_124 = (undefined *)FUN_00679d22();
            local_120 = (undefined1 *)0xc;
            *(undefined1 *)(unaff_EBP + -4) = 0x50;
            iStack_128 = 0x8550b3;
            FUN_00471102();
            *(undefined1 *)(unaff_EBP + -4) = 1;
          }
          else {
            if (bVar3 != 0x23) goto switchD_008552a4_caseD_2b;
            local_120 = (undefined1 *)0x16d;
            puStack_124 = (undefined *)(unaff_EBP + -0xf0);
            iStack_128 = 0x855077;
            puStack_124 = (undefined *)FUN_00679d22();
            local_120 = (undefined1 *)0xc;
            *(undefined1 *)(unaff_EBP + -4) = 0x51;
            iStack_128 = 0x855083;
            FUN_00471102();
            *(undefined1 *)(unaff_EBP + -4) = 1;
          }
          goto LAB_008565bc;
        }
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        local_120 = (undefined1 *)0xc87;
        puStack_124 = (undefined *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iStack_128 = 0x8551ec;
        local_120 = (undefined1 *)FUN_00679d22();
        puStack_124 = (undefined *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 0x3c;
        iStack_128 = 0x8551fb;
        FUN_004655d4();
        puStack_124 = (undefined *)0x855202;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        if (*(int *)(unaff_EBP + -0xa4) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xa4) + -0xc);
          puStack_124 = (undefined *)0x855219;
          FUN_00434e38();
        }
        local_120 = (undefined1 *)0x1eab97;
        puStack_124 = (undefined *)(unaff_EBP + -0x1c);
        iStack_128 = 0x85522a;
        FUN_00856a7c();
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      goto LAB_008560bd;
    }
    switch(bVar3) {
    case 0x26:
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      local_120 = (undefined1 *)0xc88;
      puStack_124 = (undefined *)(unaff_EBP + -0xf4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      iStack_128 = 0x855618;
      local_120 = (undefined1 *)FUN_00679d22();
      puStack_124 = (undefined *)0xffffffff;
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      iStack_128 = 0x855627;
      FUN_004655d4();
      puStack_124 = (undefined *)0x85562e;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      if (*(int *)(unaff_EBP + -0xf4) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xf4) + -0xc);
        puStack_124 = (undefined *)0x855645;
        FUN_00434e38();
      }
      local_120 = (undefined1 *)0x1eab97;
      puStack_124 = (undefined *)(unaff_EBP + -0x20);
      iStack_128 = 0x855656;
      FUN_00856a7c();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_008560bd;
    case 0x27:
      local_120 = (undefined1 *)0x8552b2;
      uVar9 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar9;
      local_120 = (undefined1 *)0x8552bc;
      iVar8 = FUN_0042459a();
      if (iVar8 != *(int *)(extraout_ECX + 0x2088)) {
        if (*(int *)(unaff_EBP + -0x10) == *(int *)(extraout_ECX + 0x2cac)) {
          puStack_124 = (undefined *)0x855386;
          local_120 = puVar15;
          FUN_004b659a();
          local_120 = (undefined1 *)0xffffffff;
          puStack_124 = (undefined *)0x855393;
          piVar11 = (int *)FUN_0047cf98();
          local_120 = (undefined1 *)0xffffffff;
          *piVar11 = iVar8;
          puStack_124 = (undefined *)0x8553a2;
          puVar12 = (undefined4 *)FUN_0085877c();
          puVar10 = (undefined4 *)(unaff_EBP + -0x11c);
          for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          local_120 = (undefined1 *)0xffffffff;
          puStack_124 = (undefined *)(unaff_EBP + -0x11c);
          *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
          iStack_128 = 0x8553c1;
          FUN_00414edd();
          local_120 = (undefined1 *)0x16b;
          puStack_124 = (undefined *)(unaff_EBP + -0x5c);
          iStack_128 = 0x8553d4;
          puVar10 = (undefined4 *)FUN_00679d22();
          local_120 = *(undefined1 **)(unaff_EBP + -0x14);
          puStack_124 = (undefined *)*puVar10;
          iStack_128 = unaff_EBP + 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          iStack_12c = 0x8553e7;
          FUN_00434e21();
          iVar8 = *(int *)(unaff_EBP + -0x5c);
          *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_008555db:
          if (iVar8 != 0) {
            local_120 = (undefined1 *)(iVar8 + -0xc);
            puStack_124 = (undefined *)0x8555e8;
            FUN_00434e38();
          }
          goto LAB_008555e9;
        }
        goto LAB_00856438;
      }
      local_120 = (undefined1 *)0x16a;
      puStack_124 = (undefined *)(unaff_EBP + -0xe4);
      iStack_128 = 0x8552e0;
      local_120 = (undefined1 *)FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      puStack_124 = (undefined *)0x8552ed;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0xe4) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xe4) + -0xc);
        puStack_124 = (undefined *)0x855306;
        FUN_00434e38();
      }
      puStack_124 = (undefined *)(unaff_EBP + 8);
      local_120 = (undefined1 *)0xc;
      iStack_128 = 0x855312;
      FUN_00471102();
      local_120 = (undefined1 *)0x0;
      puStack_124 = (undefined *)0x0;
      iStack_128 = 0x72;
      iStack_12c = 0x855320;
      FUN_0060142b();
      local_120 = (undefined1 *)0x0;
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      puStack_124 = (undefined *)0x85532d;
      FUN_00457cda();
      local_120 = (undefined1 *)(unaff_EBP + -0x38);
      puStack_124 = (undefined *)0x85533c;
      FUN_004751b2();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      local_120 = (undefined1 *)0x855348;
      FUN_0045ebca();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + 8) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + 8) + -0xc);
        puStack_124 = (undefined *)0x85535c;
        FUN_00434e38();
      }
      iVar8 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      bVar17 = iVar8 == 0;
      goto LAB_00856456;
    case 0x28:
      local_120 = (undefined1 *)0x16c;
      puStack_124 = (undefined *)(unaff_EBP + -0x7c);
      iStack_128 = 0x855675;
      puStack_124 = (undefined *)FUN_00679d22();
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      iStack_128 = 0x855681;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      break;
    case 0x29:
      local_120 = (undefined1 *)0x170;
      puStack_124 = (undefined *)(unaff_EBP + -0xbc);
      iStack_128 = 0x8556a5;
      puStack_124 = (undefined *)FUN_00679d22();
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      iStack_128 = 0x8556b1;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      break;
    case 0x2a:
      local_120 = (undefined1 *)0x17a;
      puStack_124 = (undefined *)(unaff_EBP + -0x8c);
      iStack_128 = 0x85573e;
      puStack_124 = (undefined *)FUN_00679d22();
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x57;
      iStack_128 = 0x85574a;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      break;
    default:
      goto switchD_008552a4_caseD_2b;
    case 0x2c:
    case 0x2f:
      local_120 = (undefined1 *)0x8553fd;
      iVar8 = FUN_0042459a();
      if (iVar8 == *(int *)(extraout_ECX + 0x2cac)) {
        local_120 = (undefined1 *)0x855410;
        uVar9 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar9;
        local_120 = (undefined1 *)(unaff_EBP + -0xac);
        puStack_124 = (undefined *)0x855421;
        local_120 = (undefined1 *)FUN_0045cdbc();
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        puStack_124 = (undefined *)0x85542e;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0xac) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xac) + -0xc);
          puStack_124 = (undefined *)0x855445;
          FUN_00434e38();
        }
        local_120 = *(undefined1 **)(unaff_EBP + -0x20);
        if (*(undefined1 **)(extraout_ECX + 0x2088) != local_120) {
          puStack_124 = (undefined *)0x855535;
          FUN_00856688();
          local_120 = &DAT_00978474;
          puStack_124 = (undefined *)0x855542;
          iVar8 = FUN_004a3109();
          if (iVar8 == 0) {
            local_120 = (undefined1 *)0x164;
            puStack_124 = (undefined *)(unaff_EBP + -0x6c);
            iStack_128 = 0x855559;
            local_120 = (undefined1 *)FUN_00679d22();
            *(undefined1 *)(unaff_EBP + -4) = 0x24;
            puStack_124 = (undefined *)0x855566;
            FUN_00414f8b();
            iVar8 = *(int *)(unaff_EBP + -0x6c);
            *(undefined1 *)(unaff_EBP + -4) = 1;
          }
          else if (bVar3 != 0x2f) {
            local_120 = (undefined1 *)0x165;
            puStack_124 = (undefined *)(unaff_EBP + -0x74);
            iStack_128 = 0x8555be;
            puVar10 = (undefined4 *)FUN_00679d22();
            local_120 = *(undefined1 **)(unaff_EBP + -0x14);
            puStack_124 = (undefined *)*puVar10;
            iStack_128 = unaff_EBP + 8;
            *(undefined1 *)(unaff_EBP + -4) = 0x26;
            iStack_12c = 0x8555d1;
            FUN_00434e21();
            iVar8 = *(int *)(unaff_EBP + -0x74);
            *(undefined1 *)(unaff_EBP + -4) = 1;
          }
          else {
            local_120 = (undefined1 *)0x163;
            puStack_124 = (undefined *)(unaff_EBP + -0xb4);
            iStack_128 = 0x855589;
            puVar10 = (undefined4 *)FUN_00679d22();
            local_120 = *(undefined1 **)(unaff_EBP + -0x14);
            puStack_124 = (undefined *)*puVar10;
            iStack_128 = unaff_EBP + 8;
            *(undefined1 *)(unaff_EBP + -4) = 0x25;
            iStack_12c = 0x85559c;
            FUN_00434e21();
            iVar8 = *(int *)(unaff_EBP + -0xb4);
            *(undefined1 *)(unaff_EBP + -4) = 1;
          }
          goto LAB_008555db;
        }
        if (bVar3 != 0x2f) {
          local_120 = (undefined1 *)0x162;
          puStack_124 = (undefined *)(unaff_EBP + -100);
          iStack_128 = 0x855498;
          local_120 = (undefined1 *)FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -0x18) = 2;
          *(undefined4 *)(unaff_EBP + -4) = 0x23;
        }
        else {
          local_120 = (undefined1 *)0x161;
          puStack_124 = (undefined *)(unaff_EBP + -0xd4);
          iStack_128 = 0x855479;
          local_120 = (undefined1 *)FUN_00679d22();
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
        }
        puStack_124 = (undefined *)0x8554b2;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 0x22;
        if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
          *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
          if (*(int *)(unaff_EBP + -100) != 0) {
            local_120 = (undefined1 *)(*(int *)(unaff_EBP + -100) + -0xc);
            puStack_124 = (undefined *)0x8554d3;
            FUN_00434e38();
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (((*(byte *)(unaff_EBP + -0x18) & 1) != 0) && (*(int *)(unaff_EBP + -0xd4) != 0)) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xd4) + -0xc);
          puStack_124 = (undefined *)0x8554f0;
          FUN_00434e38();
        }
        local_120 = (undefined1 *)0x8554fc;
        FUN_0082f8bf();
        if (DAT_0097befc != 0) {
          local_120 = (undefined1 *)0x85550f;
          FUN_00815de9();
          if (DAT_0097befc != 0) {
            local_120 = (undefined1 *)0x1;
            puStack_124 = (undefined *)0x855524;
            (*(code *)**(undefined4 **)(DAT_0097befc + 8))();
          }
        }
LAB_008555e9:
        puStack_124 = (undefined *)(unaff_EBP + 8);
        local_120 = (undefined1 *)0xc;
        iStack_128 = 0x8555f4;
        FUN_00471102();
        goto LAB_0085627a;
      }
      goto LAB_00856438;
    case 0x2d:
      local_120 = (undefined1 *)0x16e;
      puStack_124 = (undefined *)(unaff_EBP + -0x84);
      iStack_128 = 0x8556d8;
      puStack_124 = (undefined *)FUN_00679d22();
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x54;
      iStack_128 = 0x8556e4;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      break;
    case 0x30:
      local_120 = (undefined1 *)0x16e;
      puStack_124 = (undefined *)(unaff_EBP + -0xdc);
      iStack_128 = 0x85570b;
      puStack_124 = (undefined *)FUN_00679d22();
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x55;
      iStack_128 = 0x855717;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    goto LAB_008565bc;
  }
  switch(bVar3) {
  case 0x34:
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_120 = (undefined1 *)0xc89;
    puStack_124 = (undefined *)(unaff_EBP + -0x90);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_128 = 0x856013;
    local_120 = (undefined1 *)FUN_00679d22();
    puStack_124 = (undefined *)0xffffffff;
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iStack_128 = 0x856022;
    FUN_004655d4();
    puStack_124 = (undefined *)0x856029;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    if (*(int *)(unaff_EBP + -0x90) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x90) + -0xc);
      puStack_124 = (undefined *)0x856040;
      FUN_00434e38();
    }
    local_120 = (undefined1 *)0x1eab97;
    puStack_124 = (undefined *)(unaff_EBP + -0x10);
    iStack_128 = 0x856051;
    FUN_00856a7c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008560bd;
  case 0x35:
    local_120 = (undefined1 *)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)0x855852;
    FUN_0045cdbc();
    local_120 = (undefined1 *)0x15d;
    puStack_124 = (undefined *)(unaff_EBP + -0xec);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_128 = 0x85586c;
    puVar10 = (undefined4 *)FUN_00679d22();
    local_120 = *(undefined1 **)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)*puVar10;
    iStack_128 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_12c = 0x85587f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int *)(unaff_EBP + -0xec) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xec) + -0xc);
      puStack_124 = (undefined *)0x855899;
      FUN_00434e38();
    }
    puStack_124 = (undefined *)(unaff_EBP + 8);
    local_120 = (undefined1 *)0xc;
    iStack_128 = 0x8558a5;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_0085642a;
  case 0x36:
    local_120 = (undefined1 *)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)0x8558be;
    FUN_0045cdbc();
    local_120 = (undefined1 *)0xa6a;
    puStack_124 = (undefined *)(unaff_EBP + -0x9c);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    iStack_128 = 0x8558d8;
    puVar10 = (undefined4 *)FUN_00679d22();
    local_120 = *(undefined1 **)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)*puVar10;
    iStack_128 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_12c = 0x8558eb;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (*(int *)(unaff_EBP + -0x9c) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x9c) + -0xc);
      puStack_124 = (undefined *)0x855905;
      FUN_00434e38();
    }
    puStack_124 = (undefined *)(unaff_EBP + 8);
    local_120 = (undefined1 *)0xc;
    iStack_128 = 0x855911;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_0085642a;
  case 0x37:
    local_120 = (undefined1 *)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)0x85592a;
    FUN_0045cdbc();
    local_120 = (undefined1 *)0x15e;
    puStack_124 = (undefined *)(unaff_EBP + -0x40);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_128 = 0x855941;
    puVar10 = (undefined4 *)FUN_00679d22();
    local_120 = *(undefined1 **)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)*puVar10;
    iStack_128 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_12c = 0x855954;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (*(int *)(unaff_EBP + -0x40) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x40) + -0xc);
      puStack_124 = (undefined *)0x85596b;
      FUN_00434e38();
    }
    puStack_124 = (undefined *)(unaff_EBP + 8);
    local_120 = (undefined1 *)0xc;
    iStack_128 = 0x855977;
    FUN_00471102();
    iVar8 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0085642a:
    if (iVar8 != 0) {
      local_120 = (undefined1 *)(iVar8 + -0xc);
      puStack_124 = (undefined *)0x856437;
      FUN_00434e38();
    }
    goto LAB_00856438;
  case 0x38:
    local_120 = (undefined1 *)0x177;
    puStack_124 = (undefined *)(unaff_EBP + -0xd0);
    iStack_128 = 0x85650e;
    puStack_124 = (undefined *)FUN_00679d22();
    local_120 = (undefined1 *)0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x56;
    iStack_128 = 0x85651a;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008565bc;
  default:
switchD_008552a4_caseD_2b:
    local_120 = (undefined1 *)0x179;
    puStack_124 = (undefined *)(unaff_EBP + -0xe0);
    iStack_128 = 0x8565a4;
    puStack_124 = (undefined *)FUN_00679d22();
    local_120 = (undefined1 *)0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    iStack_128 = 0x8565b0;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008565bc;
  case 0x3a:
    local_120 = (undefined1 *)0x85598c;
    iVar8 = FUN_0042459a();
    if (iVar8 != *(int *)(extraout_ECX + 0x2cac)) goto LAB_00856438;
    local_120 = (undefined1 *)0x85599f;
    uVar16 = FUN_0042452b();
    *(uint *)(extraout_ECX + 0x2cc0) = uVar16 & 0xff;
    if ((*(int *)(extraout_ECX + 0x2cac) != 0) &&
       (**(int **)(extraout_ECX + 0x2cb8) == *(int *)(extraout_ECX + 0x2088))) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      local_120 = (undefined1 *)0xc86;
      puStack_124 = (undefined *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iStack_128 = 0x8559e8;
      puVar10 = (undefined4 *)FUN_00679d22();
      local_120 = *(undefined1 **)(extraout_ECX + 0x2cc0);
      puStack_124 = (undefined *)*puVar10;
      iStack_128 = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      iStack_12c = 0x8559fe;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x48) + -0xc);
        puStack_124 = (undefined *)0x855a15;
        FUN_00434e38();
      }
      local_120 = (undefined1 *)(unaff_EBP + -0x20);
      puStack_124 = (undefined *)0xffffffff;
      iStack_128 = 0x855a24;
      FUN_004655d4();
      puStack_124 = (undefined *)0x855a2b;
      FUN_00414f8b();
      local_120 = (undefined1 *)0x1eab97;
      puStack_124 = (undefined *)(unaff_EBP + -0x1c);
      iStack_128 = 0x855a3b;
      FUN_00856a7c();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
        puStack_124 = (undefined *)0x855a4f;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_008560bd;
    }
    break;
  case 0x3b:
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_120 = (undefined1 *)0xc8a;
    puStack_124 = (undefined *)(unaff_EBP + -0x98);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    iStack_128 = 0x856078;
    local_120 = (undefined1 *)FUN_00679d22();
    puStack_124 = (undefined *)0xffffffff;
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iStack_128 = 0x856087;
    FUN_004655d4();
    puStack_124 = (undefined *)0x85608e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    if (*(int *)(unaff_EBP + -0x98) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x98) + -0xc);
      puStack_124 = (undefined *)0x8560a5;
      FUN_00434e38();
    }
    local_120 = (undefined1 *)0x1eab97;
    puStack_124 = (undefined *)(unaff_EBP + -0x10);
    iStack_128 = 0x8560b6;
    FUN_00856a7c();
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_008560bd:
    local_120 = (undefined1 *)0x8560c2;
    FUN_0045f10c();
    break;
  case 0x3c:
    local_120 = (undefined1 *)0x855ea3;
    iVar8 = FUN_0042459a();
    if (iVar8 == *(int *)(extraout_ECX + 0x2cac)) {
      local_120 = (undefined1 *)0x855eb6;
      iVar8 = FUN_0042459a();
      local_120 = (undefined1 *)0x855ebf;
      uVar9 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + -0x10) = uVar9;
      local_120 = (undefined1 *)0x855ec9;
      uVar9 = FUN_0042459a();
      iVar13 = 0;
      while( true ) {
        iVar14 = 0;
        if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
          iVar14 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
        }
        if (iVar14 <= iVar13) break;
        if (*(int *)(*(int *)(extraout_ECX + 0x2cb8) + iVar13 * 4) == iVar8) goto LAB_00855ef1;
        iVar13 = iVar13 + 1;
      }
      iVar13 = -1;
LAB_00855ef1:
      if (iVar13 != -1) {
        *(undefined4 *)(*(int *)(extraout_ECX + 0x2cbc) + 0x11 + iVar13 * 0x25) =
             *(undefined4 *)(unaff_EBP + -0x10);
        *(undefined4 *)(*(int *)(extraout_ECX + 0x2cbc) + 0xd + iVar13 * 0x25) = uVar9;
        break;
      }
    }
    goto LAB_00856438;
  case 0x3d:
    local_120 = (undefined1 *)0x855f22;
    iVar8 = FUN_0042459a();
    if (iVar8 == *(int *)(extraout_ECX + 0x2cac)) {
      local_120 = (undefined1 *)0x855f35;
      iVar8 = FUN_0042459a();
      local_120 = (undefined1 *)0x855f3e;
      bVar3 = FUN_0042452b();
      iVar13 = 0;
      while( true ) {
        iVar14 = 0;
        if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
          iVar14 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
        }
        if (iVar14 <= iVar13) {
          *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
          goto LAB_00855f6c;
        }
        if (*(int *)(*(int *)(extraout_ECX + 0x2cb8) + iVar13 * 4) == iVar8) break;
        iVar13 = iVar13 + 1;
      }
      *(int *)(unaff_EBP + -0x18) = iVar13;
LAB_00855f6c:
      if (*(int *)(unaff_EBP + -0x18) != -1) {
        *(uint *)(*(int *)(unaff_EBP + -0x18) * 0x25 + 0x19 + *(int *)(extraout_ECX + 0x2cbc)) =
             (uint)bVar3;
        if (bVar3 != 0) {
          local_120 = (undefined1 *)0x110;
          puStack_124 = (undefined *)0x855fa3;
          iVar8 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x24) = iVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          if (iVar8 == 0) {
            puVar15 = (undefined1 *)0x0;
          }
          else {
            local_120 = (undefined1 *)0x855fb5;
            puVar15 = (undefined1 *)FUN_004defeb();
          }
          local_120 = (undefined1 *)0x0;
          *(undefined ***)(unaff_EBP + -0x24) = &puStack_124;
          iStack_128 = -1;
          iStack_12c = *(int *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          *(undefined ***)(unaff_EBP + -0x10) = &puStack_124;
          piStack_130 = (int *)0x855fd6;
          iStack_12c = FUN_008588f1();
          piStack_130 = (int *)0x855fe1;
          FUN_0045f0f3();
          iStack_128 = 0x855fe8;
          FUN_004e1c6a();
          puStack_124 = (undefined *)0x855ff0;
          local_120 = puVar15;
          FUN_008497ad();
        }
        break;
      }
    }
    goto LAB_00856438;
  case 0x3e:
    local_120 = (undefined1 *)0x855bea;
    iVar8 = FUN_0042459a();
    if (iVar8 != *(int *)(extraout_ECX + 0x2cac)) goto LAB_00856438;
    local_120 = (undefined1 *)(unaff_EBP + -0x58);
    puStack_124 = (undefined *)0x855c01;
    local_120 = (undefined1 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    puStack_124 = (undefined *)0x855c11;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x58) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x58) + -0xc);
      puStack_124 = (undefined *)0x855c25;
      FUN_00434e38();
    }
    local_120 = (undefined1 *)(unaff_EBP + -0x60);
    puStack_124 = (undefined *)0x855c31;
    local_120 = (undefined1 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    puStack_124 = (undefined *)0x855c44;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x60) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x60) + -0xc);
      puStack_124 = (undefined *)0x855c58;
      FUN_00434e38();
    }
    local_120 = (undefined1 *)(unaff_EBP + -0x68);
    puStack_124 = (undefined *)0x855c64;
    local_120 = (undefined1 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    puStack_124 = (undefined *)0x855c77;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x68) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x68) + -0xc);
      puStack_124 = (undefined *)0x855c8b;
      FUN_00434e38();
    }
    local_120 = (undefined1 *)(unaff_EBP + -0x70);
    puStack_124 = (undefined *)0x855c97;
    local_120 = (undefined1 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    puStack_124 = (undefined *)0x855caa;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x70) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x70) + -0xc);
      puStack_124 = (undefined *)0x855cbe;
      FUN_00434e38();
    }
    local_120 = (undefined1 *)(unaff_EBP + -0x78);
    puStack_124 = (undefined *)0x855cca;
    local_120 = (undefined1 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    puStack_124 = (undefined *)0x855cdd;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x78) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x78) + -0xc);
      puStack_124 = (undefined *)0x855cf1;
      FUN_00434e38();
    }
    if ((*(int *)(extraout_ECX + 0x2cac) != 0) &&
       (piVar11 = *(int **)(extraout_ECX + 0x2cb8), *piVar11 == *(int *)(extraout_ECX + 0x2088))) {
      *(int ***)(unaff_EBP + -0x24) = &piStack_130;
      uStack_134 = 0xc96;
      piStack_130 = piVar11;
LAB_00855da1:
      local_120 = (undefined1 *)0x0;
      puStack_124 = (undefined *)0x0;
      iStack_128 = 0;
      iStack_12c = 0;
      FUN_00679d22(&piStack_130);
      uStack_134 = 0x855db1;
      FUN_007db3ad();
    }
    break;
  case 0x40:
    local_120 = (undefined1 *)0x855a63;
    iVar8 = FUN_0042459a();
    if (iVar8 != *(int *)(extraout_ECX + 0x2cac)) goto LAB_00856438;
    local_120 = (undefined1 *)0x855a76;
    iVar8 = FUN_0042459a();
    *(int *)(unaff_EBP + -0x20) = iVar8;
    local_120 = (undefined1 *)0x855a82;
    uVar16 = FUN_0042452b();
    iVar13 = 0;
    while( true ) {
      iVar14 = 0;
      if (*(int *)(extraout_ECX + 0x2cb8) != 0) {
        iVar14 = *(int *)(*(int *)(extraout_ECX + 0x2cb8) + -4);
      }
      if (iVar14 <= iVar13) break;
      if (*(int *)(*(int *)(extraout_ECX + 0x2cb8) + iVar13 * 4) == iVar8) goto LAB_00855aa9;
      iVar13 = iVar13 + 1;
    }
    iVar13 = -1;
LAB_00855aa9:
    if (-1 < iVar13) {
      *(uint *)(*(int *)(extraout_ECX + 0x2cbc) + 0x15 + iVar13 * 0x25) = uVar16 & 0xff;
      puStack_124 = (undefined *)(*(int *)(extraout_ECX + 0x2cbc) + iVar13 * 0x25);
      local_120 = (undefined1 *)0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      iStack_128 = 0x855ad8;
      FUN_00414edd();
      local_120 = (undefined1 *)(*(int *)(extraout_ECX + 0x2cb4) + -4 + (uVar16 & 0xff) * 4);
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      puStack_124 = (undefined *)0x855af2;
      FUN_00414f8b();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      local_120 = (undefined1 *)0xc95;
      puStack_124 = (undefined *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iStack_128 = 0x855b0c;
      piVar11 = (int *)FUN_00679d22();
      local_120 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_128 = *piVar11;
      puStack_124 = *(undefined **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iStack_12c = unaff_EBP + -0x1c;
      piStack_130 = (int *)0x855b22;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      if (*(int *)(unaff_EBP + -0x50) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x50) + -0xc);
        puStack_124 = (undefined *)0x855b39;
        FUN_00434e38();
      }
      puStack_124 = (undefined *)(unaff_EBP + -0x1c);
      local_120 = (undefined1 *)0xc;
      iStack_128 = 0x855b45;
      FUN_00471102();
      if ((*(int *)(unaff_EBP + -0x20) == *(int *)(extraout_ECX + 0x2088)) && (DAT_0097befc != 0)) {
        local_120 = (undefined1 *)0x855b61;
        FUN_00815de9();
        if (DAT_0097befc != 0) {
          local_120 = (undefined1 *)0x1;
          puStack_124 = (undefined *)0x855b73;
          (*(code *)**(undefined4 **)(DAT_0097befc + 8))();
        }
        local_120 = (undefined1 *)0xffffffff;
        puStack_124 = &DAT_0096ca44;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        iStack_128 = 0x855b85;
        FUN_00414edd();
        puStack_124 = (undefined *)(unaff_EBP + -0x20);
        local_120 = (undefined1 *)0xc;
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        iStack_128 = 0x855b94;
        FUN_00471102();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
          puStack_124 = (undefined *)0x855baa;
          FUN_00434e38();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
        puStack_124 = (undefined *)0x855bbf;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
        puStack_124 = (undefined *)0x855bd4;
        FUN_00434e38();
      }
      iVar8 = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      bVar17 = iVar8 == 0;
      goto LAB_0085626e;
    }
    break;
  case 0x42:
    local_120 = (undefined1 *)0x855d2d;
    iVar8 = FUN_0042459a();
    if (iVar8 != *(int *)(extraout_ECX + 0x2cac)) goto LAB_00856438;
    local_120 = (undefined1 *)0x855d40;
    uVar6 = FUN_00424561();
    *(undefined2 *)(extraout_ECX + 0x2cc4) = uVar6;
    local_120 = (undefined1 *)0x855d4e;
    uVar5 = FUN_0042452b();
    *(undefined1 *)(extraout_ECX + 0x2cc6) = uVar5;
    local_120 = (undefined1 *)0x855d5b;
    uVar6 = FUN_00424561();
    *(undefined2 *)(extraout_ECX + 0x2cc7) = uVar6;
    local_120 = (undefined1 *)0x855d69;
    uVar5 = FUN_0042452b();
    *(undefined1 *)(extraout_ECX + 0x2cc9) = uVar5;
    if ((*(int *)(extraout_ECX + 0x2cac) != 0) &&
       (piVar11 = *(int **)(extraout_ECX + 0x2cb8), *piVar11 == *(int *)(extraout_ECX + 0x2088))) {
      *(int ***)(unaff_EBP + -0x24) = &piStack_130;
      uStack_134 = 0xcc4;
      piStack_130 = piVar11;
      goto LAB_00855da1;
    }
    break;
  case 0x44:
    local_120 = (undefined1 *)0x855de5;
    iVar8 = FUN_0042459a();
    if (iVar8 != *(int *)(extraout_ECX + 0x2cac)) goto LAB_00856438;
    local_120 = (undefined1 *)(unaff_EBP + -0x80);
    puStack_124 = (undefined *)0x855dfc;
    local_120 = (undefined1 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    puStack_124 = (undefined *)0x855e0e;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x80) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x80) + -0xc);
      puStack_124 = (undefined *)0x855e22;
      FUN_00434e38();
    }
    pcVar1 = *(char **)(extraout_ECX + 0x2cca);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      local_120 = (undefined1 *)0xcce;
      puStack_124 = (undefined *)(unaff_EBP + -0x88);
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iStack_128 = 0x855e54;
      puVar10 = (undefined4 *)FUN_00679d22();
      local_120 = *(undefined1 **)(extraout_ECX + 0x2cca);
      puStack_124 = (undefined *)*puVar10;
      iStack_128 = unaff_EBP + -0x10;
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      iStack_12c = 0x855e66;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      if (*(int *)(unaff_EBP + -0x88) != 0) {
        local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0x88) + -0xc);
        puStack_124 = (undefined *)0x855e80;
        FUN_00434e38();
      }
      puStack_124 = (undefined *)(unaff_EBP + -0x10);
      local_120 = (undefined1 *)0xc;
      iStack_128 = 0x855e8c;
      FUN_00471102();
      iVar8 = *(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_00855e95:
      bVar17 = iVar8 == 0;
      goto LAB_0085626e;
    }
    break;
  case 0x48:
    local_120 = (undefined1 *)0x855dc0;
    iVar8 = FUN_0042459a();
    if (iVar8 != *(int *)(extraout_ECX + 0x2cac)) goto LAB_00856438;
    local_120 = (undefined1 *)0x855dd3;
    uVar9 = FUN_0042459a();
    *(undefined4 *)(extraout_ECX + 0x2cce) = uVar9;
    break;
  case 0x49:
    local_120 = (undefined1 *)0x8560ce;
    FUN_0042459a();
    local_120 = (undefined1 *)0x8560d5;
    iVar8 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    if (0 < iVar8) {
      do {
        *(undefined4 *)(unaff_EBP + -0x110) = 0;
        local_120 = (undefined1 *)(unaff_EBP + -0xa0);
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        puStack_124 = (undefined *)0x856100;
        local_120 = (undefined1 *)FUN_0045cdbc();
        *(undefined1 *)(unaff_EBP + -4) = 0x45;
        puStack_124 = (undefined *)0x856110;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x44;
        if (*(int *)(unaff_EBP + -0xa0) != 0) {
          local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xa0) + -0xc);
          puStack_124 = (undefined *)0x856127;
          FUN_00434e38();
        }
        local_120 = (undefined1 *)0x85612f;
        uVar9 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x10c) = uVar9;
        local_120 = (undefined1 *)0x85613c;
        uVar9 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x108) = uVar9;
        local_120 = (undefined1 *)0x856149;
        uVar9 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x104) = uVar9;
        local_120 = (undefined1 *)0x856156;
        uVar9 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0x100) = uVar9;
        local_120 = (undefined1 *)0x856163;
        uVar9 = FUN_0042459a();
        *(undefined4 *)(unaff_EBP + -0xfc) = uVar9;
        local_120 = (undefined1 *)(unaff_EBP + -0x110);
        puStack_124 = (undefined *)0xffffffff;
        iStack_128 = 0x85617a;
        FUN_00858909();
        puStack_124 = (undefined *)0x856181;
        FUN_008584f2();
        *(undefined1 *)(unaff_EBP + -4) = 0x43;
        local_120 = (undefined1 *)0x856190;
        FUN_00414ebb();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_120 = (undefined1 *)0x98;
    puStack_124 = (undefined *)0x8561a6;
    iVar8 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x24) = iVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      local_120 = (undefined1 *)(unaff_EBP + -0x10);
      puStack_124 = (undefined *)0x8561bc;
      iVar8 = FUN_0052293c();
    }
    uVar16 = -(uint)(iVar8 != 0) & iVar8 + 8U;
    *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar16 != 0) & uVar16 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    local_120 = (undefined1 *)0x8561e3;
    FUN_0085858b();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    local_120 = (undefined1 *)0x8561ef;
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    local_120 = (undefined1 *)0x8561fb;
    FUN_008585a8();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_120 = (undefined1 *)0x856207;
    FUN_00523535();
    break;
  case 0x4a:
    local_120 = (undefined1 *)0xd91;
    puStack_124 = (undefined *)(unaff_EBP + -0xc0);
    iStack_128 = 0x856481;
    puStack_124 = (undefined *)FUN_00679d22();
    local_120 = (undefined1 *)0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x4e;
    iStack_128 = 0x85648d;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0xc0) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + -0xc0) + -0xc);
      puStack_124 = (undefined *)0x8564a6;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + 8) + -0xc);
      puStack_124 = (undefined *)0x8564bf;
      FUN_00434e38();
    }
    goto LAB_008565cd;
  case 0x4b:
    local_120 = (undefined1 *)0xd92;
    puStack_124 = (undefined *)(unaff_EBP + -200);
    iStack_128 = 0x8564db;
    puStack_124 = (undefined *)FUN_00679d22();
    local_120 = (undefined1 *)0xc;
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    iStack_128 = 0x8564e7;
    FUN_00471102();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    goto LAB_008565bc;
  case 0x4c:
    local_120 = (undefined1 *)0x8562dc;
    uVar16 = FUN_0042452b();
    local_120 = (undefined1 *)0x8562e6;
    piVar11 = (int *)FUN_0042459a();
    if (piVar11 != (int *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      if (piVar11 == (int *)0x1) {
        local_120 = (undefined1 *)0xd93;
        puStack_124 = (undefined *)(unaff_EBP + -0xb8);
        iStack_128 = 0x8563a9;
        puVar10 = (undefined4 *)FUN_00679d22();
        puVar2 = (undefined *)*puVar10;
        *(undefined1 *)(unaff_EBP + -4) = 0x4a;
        puStack_124 = (undefined *)0x8563b7;
        local_120 = (undefined1 *)(uVar16 & 0xff);
        local_120 = (undefined1 *)FUN_004ec897();
        iStack_128 = unaff_EBP + -0x18;
        iStack_12c = 0x8563c2;
        puStack_124 = puVar2;
        FUN_00434e21();
        iVar8 = *(int *)(unaff_EBP + -0xb8);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
      }
      else if (piVar11 == (int *)0x2) {
        local_120 = (undefined1 *)0xd94;
        puStack_124 = (undefined *)(unaff_EBP + -0xb0);
        iStack_128 = 0x85636b;
        puVar10 = (undefined4 *)FUN_00679d22();
        puVar2 = (undefined *)*puVar10;
        *(undefined1 *)(unaff_EBP + -4) = 0x4b;
        puStack_124 = (undefined *)0x856379;
        local_120 = (undefined1 *)(uVar16 & 0xff);
        local_120 = (undefined1 *)FUN_004ec897();
        iStack_128 = unaff_EBP + -0x18;
        iStack_12c = 0x856384;
        puStack_124 = puVar2;
        FUN_00434e21();
        iVar8 = *(int *)(unaff_EBP + -0xb0);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
      }
      else {
        local_120 = (undefined1 *)0xd95;
        puStack_124 = (undefined *)(unaff_EBP + -0xa8);
        iStack_128 = 0x856334;
        puVar10 = (undefined4 *)FUN_00679d22();
        puStack_124 = (undefined *)*puVar10;
        local_120 = (undefined1 *)((int)piVar11 + -1);
        iStack_128 = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 0x4c;
        iStack_12c = 0x856346;
        FUN_00434e21();
        iVar8 = *(int *)(unaff_EBP + -0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
      }
      if (iVar8 != 0) {
        local_120 = (undefined1 *)(iVar8 + -0xc);
        puStack_124 = (undefined *)0x8563dc;
        FUN_00434e38();
      }
      local_120 = (undefined1 *)0x0;
      puStack_124 = (undefined *)(unaff_EBP + -0x18);
      *(undefined1 ***)(unaff_EBP + -0x24) = &local_120;
      iStack_128 = 0x8563ef;
      FUN_00414f8b();
      *(int ***)(unaff_EBP + -0x10) = &piStack_130;
      uStack_134 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      FUN_006f5500();
      uStack_134 = 0x7fffffff;
      FUN_00684733(3,1);
      puStack_124 = (undefined *)(unaff_EBP + -0x18);
      local_120 = (undefined1 *)0xc;
      iStack_128 = 0x856421;
      FUN_00471102();
      iVar8 = *(int *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_0085642a;
    }
    *(int **)(unaff_EBP + -0x24) = &iStack_12c;
    uStack_134 = 0x8562fa;
    piStack_130 = piVar11;
    FUN_006f5500();
    piStack_130 = (int *)0x1;
    uStack_134 = 3;
    FUN_00684963();
LAB_00856438:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 8) != 0) {
      local_120 = (undefined1 *)(*(int *)(unaff_EBP + 8) + -0xc);
      puStack_124 = (undefined *)0x85644c;
      FUN_00434e38();
    }
    iVar8 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    bVar17 = iVar8 == 0;
LAB_00856456:
    if (!bVar17) {
      local_120 = (undefined1 *)(iVar8 + -0xc);
      puStack_124 = (undefined *)0x856465;
      FUN_00434e38();
    }
    goto LAB_008565d9;
  case 0x4d:
    local_120 = (undefined1 *)(unaff_EBP + -0x10);
    puStack_124 = (undefined *)0x856214;
    FUN_0045cdbc();
    local_120 = (undefined1 *)0x0;
    puStack_124 = (undefined *)0x0;
    iStack_128 = -1;
    iStack_12c = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    piStack_130 = (int *)0x0;
    uStack_134 = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x10),0xffffffff,&uStack_134,0x3fffffff);
    FUN_004184ca(&uStack_134,0xffffffff);
    uVar9 = (*DAT_0097b704)();
    *(undefined4 *)(extraout_ECX + 0x2cdc) = uVar9;
    iVar8 = *(int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    bVar17 = iVar8 == 0;
LAB_0085626e:
    if (!bVar17) {
      local_120 = (undefined1 *)(iVar8 + -0xc);
      puStack_124 = (undefined *)0x856279;
      FUN_00434e38();
    }
    break;
  case 0x4e:
    local_120 = (undefined1 *)0x856532;
    cVar4 = FUN_0042452b();
    if (cVar4 == '\0') {
      local_120 = (undefined1 *)0x179;
      puStack_124 = (undefined *)(unaff_EBP + -0xd8);
      iStack_128 = 0x856574;
      puStack_124 = (undefined *)FUN_00679d22();
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x59;
      iStack_128 = 0x856580;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      local_120 = (undefined1 *)(unaff_EBP + -0x20);
      puStack_124 = (undefined *)0x856544;
      FUN_0045cdbc();
      puStack_124 = (undefined *)(unaff_EBP + -0x20);
      local_120 = (undefined1 *)0xc;
      *(undefined1 *)(unaff_EBP + -4) = 0x58;
      iStack_128 = 0x856553;
      FUN_00471102();
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
LAB_008565bc:
    local_120 = (undefined1 *)0x8565c1;
    FUN_00414ebb();
    goto LAB_008565c1;
  }
LAB_0085627a:
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 2)) {
    local_120 = (undefined1 *)0x856297;
    FUN_0077e45e();
  }
  if (DAT_00978358 != 0) {
    local_120 = (undefined1 *)0x8562ab;
    FUN_007b02be();
  }
  if ((DAT_0097bef4 != 0) && (*(int *)(DAT_0097bef4 + 0x588) == 3)) {
    local_120 = (undefined1 *)0x8562d0;
    FUN_0077e45e();
  }
LAB_008565c1:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_120 = (undefined1 *)0x8565cd;
  FUN_00414ebb();
LAB_008565cd:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_120 = (undefined1 *)0x8565d9;
  FUN_00414ebb();
LAB_008565d9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


