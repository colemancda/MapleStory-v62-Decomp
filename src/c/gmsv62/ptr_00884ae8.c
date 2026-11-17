/* ptr_00884ae8 - 0x00884ae8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_00884ae8(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  byte bVar14;
  int unaff_EBX;
  int unaff_EBP;
  byte *pbVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  int unaff_EDI;
  undefined8 uVar19;
  uint uVar20;
  
code_r0x00884ae8:
  uVar20 = 0x6f;
LAB_00884d06:
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    if (*(char *)(unaff_EBP + -0xf) == '\0') {
      while ((uVar20 != 0x78 && (uVar20 != 0x70))) {
        if (DAT_009728fc < 2) {
          uVar12 = (byte)PTR_DAT_009726f0[unaff_EBX * 2] & 4;
        }
        else {
          uVar12 = FUN_0088329d(unaff_EBX,4);
        }
        if (uVar12 == 0) goto LAB_00884ecd;
        if (uVar20 == 0x6f) {
          if (0x37 < unaff_EBX) goto LAB_00884ecd;
          iVar13 = unaff_EDI << 3;
        }
        else {
          iVar13 = unaff_EDI * 10;
        }
LAB_00884ea5:
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        unaff_EDI = iVar13 + -0x30 + unaff_EBX;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          piVar2 = (int *)(unaff_EBP + -0xc);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) goto LAB_00884edb;
        }
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        unaff_EBX = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
        *(int *)(unaff_EBP + -0x14) = unaff_EBX;
      }
      if (DAT_009728fc < 2) {
        uVar12 = (byte)PTR_DAT_009726f0[unaff_EBX * 2] & 0x80;
      }
      else {
        uVar12 = FUN_0088329d(unaff_EBX,0x80);
      }
      if (uVar12 != 0) {
        iVar13 = unaff_EDI << 4;
        unaff_EBX = FUN_00884fe3(unaff_EBX);
        *(int *)(unaff_EBP + -0x14) = unaff_EBX;
        goto LAB_00884ea5;
      }
LAB_00884ecd:
      *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
      FUN_00885034(unaff_EBX,*(undefined4 *)(unaff_EBP + 8));
    }
LAB_00884edb:
    if (*(char *)(unaff_EBP + -0x17) != '\0') {
      unaff_EDI = -unaff_EDI;
    }
  }
  else {
    if (*(char *)(unaff_EBP + -0xf) == '\0') {
      do {
        if (uVar20 == 0x78) {
          if (DAT_009728fc < 2) {
            uVar12 = (byte)PTR_DAT_009726f0[unaff_EBX * 2] & 0x80;
          }
          else {
            uVar12 = FUN_0088329d(unaff_EBX,0x80);
          }
          if (uVar12 == 0) {
LAB_00884def:
            *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
            FUN_00885034(unaff_EBX,*(undefined4 *)(unaff_EBP + 8));
            break;
          }
          uVar19 = __allshl();
          *(undefined8 *)(unaff_EBP + -0x28) = uVar19;
          unaff_EBX = FUN_00884fe3(unaff_EBX);
          *(int *)(unaff_EBP + -0x14) = unaff_EBX;
        }
        else {
          if (DAT_009728fc < 2) {
            uVar12 = (byte)PTR_DAT_009726f0[unaff_EBX * 2] & 4;
          }
          else {
            uVar12 = FUN_0088329d(unaff_EBX,4);
          }
          if (uVar12 == 0) goto LAB_00884def;
          if (uVar20 == 0x6f) {
            if (0x37 < unaff_EBX) goto LAB_00884def;
            uVar19 = __allshl();
          }
          else {
            uVar19 = __allmul(*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                              10,0);
          }
          *(undefined8 *)(unaff_EBP + -0x28) = uVar19;
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        uVar12 = unaff_EBX - 0x30;
        puVar1 = (uint *)(unaff_EBP + -0x28);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar12;
        *(int *)(unaff_EBP + -0x24) =
             *(int *)(unaff_EBP + -0x24) + ((int)uVar12 >> 0x1f) + (uint)CARRY4(uVar3,uVar12);
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          piVar2 = (int *)(unaff_EBP + -0xc);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) break;
        }
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        unaff_EBX = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
        *(int *)(unaff_EBP + -0x14) = unaff_EBX;
      } while( true );
    }
    if (*(char *)(unaff_EBP + -0x17) != '\0') {
      iVar13 = *(int *)(unaff_EBP + -0x28);
      *(int *)(unaff_EBP + -0x28) = -iVar13;
      *(uint *)(unaff_EBP + -0x24) = -(*(int *)(unaff_EBP + -0x24) + (uint)(iVar13 != 0));
    }
  }
  if (uVar20 == 0x46) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
LAB_00884fc4:
    if (*(int *)(unaff_EBP + -0x14) == -1) {
LAB_00884fca:
      iVar13 = *(int *)(unaff_EBP + -0x34);
      if ((iVar13 == 0) && (*(char *)(unaff_EBP + -0x15) == '\0')) {
        iVar13 = -1;
      }
    }
    else {
      iVar13 = *(int *)(unaff_EBP + -0x34);
    }
    return iVar13;
  }
  if (*(char *)(unaff_EBP + -0xe) != '\0') goto LAB_00884f25;
  *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
  do {
    if (*(int *)(unaff_EBP + -0x30) == 0) {
      if (*(char *)(unaff_EBP + -0xd) == '\0') {
        *(short *)*(int **)(unaff_EBP + -0x2c) = (short)unaff_EDI;
      }
      else {
        **(int **)(unaff_EBP + -0x2c) = unaff_EDI;
      }
    }
    else {
      puVar6 = *(undefined4 **)(unaff_EBP + -0x2c);
      *puVar6 = *(undefined4 *)(unaff_EBP + -0x28);
      puVar6[1] = *(undefined4 *)(unaff_EBP + -0x24);
    }
LAB_00884f25:
    do {
      *(char *)(unaff_EBP + -0x15) = *(char *)(unaff_EBP + -0x15) + '\x01';
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      pbVar16 = *(byte **)(unaff_EBP + 0xc);
      while( true ) {
        pbVar15 = pbVar16;
        if ((*(int *)(unaff_EBP + -0x14) == -1) &&
           ((*pbVar16 != 0x25 || (pbVar15 = *(byte **)(unaff_EBP + 0xc), pbVar15[1] != 0x6e))))
        goto LAB_00884fca;
        bVar4 = *pbVar15;
        if (bVar4 == 0) goto LAB_00884fc4;
        uVar11 = *(undefined4 *)(unaff_EBP + 8);
        if (DAT_009728fc < 2) {
          uVar20 = (byte)PTR_DAT_009726f0[(uint)bVar4 * 2] & 8;
        }
        else {
          uVar20 = FUN_0088329d((uint)bVar4,8);
        }
        if (uVar20 != 0) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
          uVar10 = FUN_0088504b(unaff_EBP + -4,uVar11,uVar11);
          FUN_00885034(uVar10);
          iVar13 = FUN_00889753(pbVar15[1]);
          pbVar16 = pbVar15;
          while (pbVar15 = pbVar16 + 1, iVar13 != 0) {
            iVar13 = FUN_00889753(pbVar16[2]);
            pbVar16 = pbVar15;
          }
        }
        if (*pbVar15 == 0x25) break;
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        uVar20 = FUN_0088501a(uVar11);
        bVar4 = *pbVar15;
        pbVar16 = pbVar15 + 1;
        *(uint *)(unaff_EBP + -0x14) = uVar20;
        *(byte **)(unaff_EBP + 0xc) = pbVar16;
        if (bVar4 != uVar20) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
          goto LAB_00884fa4;
        }
        if ((PTR_DAT_009726f0[(uVar20 & 0xff) * 2 + 1] & 0x80) != 0) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar12 = FUN_0088501a(uVar11);
          bVar4 = *pbVar16;
          pbVar16 = pbVar15 + 2;
          *(byte **)(unaff_EBP + 0xc) = pbVar16;
          if (bVar4 != uVar12) {
            *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
            FUN_00885034(uVar12,uVar11);
            *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
            FUN_00885034(uVar20,uVar11);
            goto LAB_00884fc4;
          }
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
        }
      }
      *(undefined1 *)(unaff_EBP + -0x35) = 0;
      *(undefined1 *)(unaff_EBP + -0x18) = 0;
      *(undefined1 *)(unaff_EBP + -0x17) = 0;
      *(undefined1 *)(unaff_EBP + -0xe) = 0;
      *(undefined1 *)(unaff_EBP + -0xf) = 0;
      *(undefined1 *)(unaff_EBP + -0x16) = 0;
      unaff_EDI = 0;
      *(undefined1 *)(unaff_EBP + -5) = 0;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0xc) = 0;
      *(undefined1 *)(unaff_EBP + -0xd) = 1;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      do {
        uVar20 = (uint)pbVar15[1];
        pbVar16 = pbVar15 + 1;
        if (DAT_009728fc < 2) {
          uVar12 = (byte)PTR_DAT_009726f0[uVar20 * 2] & 4;
        }
        else {
          uVar12 = FUN_0088329d(uVar20,4);
        }
        if (uVar12 == 0) {
          if (uVar20 < 0x4f) {
            if (uVar20 != 0x4e) {
              if (uVar20 == 0x2a) {
                *(char *)(unaff_EBP + -0xe) = *(char *)(unaff_EBP + -0xe) + '\x01';
              }
              else if (uVar20 != 0x46) {
                if (uVar20 == 0x49) {
                  if ((pbVar15[2] != 0x36) || (pbVar15[3] != 0x34)) goto LAB_00884719;
                  *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
                  *(undefined4 *)(unaff_EBP + -0x28) = 0;
                  *(undefined4 *)(unaff_EBP + -0x24) = 0;
                  pbVar16 = pbVar15 + 3;
                }
                else if (uVar20 == 0x4c) {
                  *(char *)(unaff_EBP + -0xd) = *(char *)(unaff_EBP + -0xd) + '\x01';
                }
                else {
LAB_00884719:
                  *(char *)(unaff_EBP + -0xf) = *(char *)(unaff_EBP + -0xf) + '\x01';
                }
              }
            }
          }
          else if (uVar20 == 0x68) {
            *(char *)(unaff_EBP + -0xd) = *(char *)(unaff_EBP + -0xd) + -1;
            *(char *)(unaff_EBP + -5) = *(char *)(unaff_EBP + -5) + -1;
          }
          else {
            if (uVar20 == 0x6c) {
              *(char *)(unaff_EBP + -0xd) = *(char *)(unaff_EBP + -0xd) + '\x01';
            }
            else if (uVar20 != 0x77) goto LAB_00884719;
            *(char *)(unaff_EBP + -5) = *(char *)(unaff_EBP + -5) + '\x01';
          }
        }
        else {
          *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
          *(uint *)(unaff_EBP + -0xc) = (uVar20 - 0x30) + *(int *)(unaff_EBP + -0xc) * 10;
        }
        pbVar15 = pbVar16;
      } while (*(char *)(unaff_EBP + -0xf) == '\0');
      *(byte **)(unaff_EBP + 0xc) = pbVar16;
      if (*(char *)(unaff_EBP + -0xe) == '\0') {
        puVar6 = *(undefined4 **)(unaff_EBP + 0x10);
        *(undefined4 **)(unaff_EBP + -0x44) = puVar6;
        *(undefined4 **)(unaff_EBP + 0x10) = puVar6 + 1;
        *(undefined4 *)(unaff_EBP + -0x2c) = *puVar6;
      }
      *(undefined1 *)(unaff_EBP + -0xf) = 0;
      if (*(char *)(unaff_EBP + -5) == '\0') {
        if ((*pbVar16 == 0x53) || (*pbVar16 == 0x43)) {
          *(undefined1 *)(unaff_EBP + -5) = 1;
        }
        else {
          *(undefined1 *)(unaff_EBP + -5) = 0xff;
        }
      }
      pbVar16 = *(byte **)(unaff_EBP + 0xc);
      uVar20 = *pbVar16 | 0x20;
      *(uint *)(unaff_EBP + -0x3c) = uVar20;
      if (uVar20 != 0x6e) {
        if ((uVar20 == 99) || (uVar20 == 0x7b)) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar11 = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
        }
        else {
          uVar11 = FUN_0088504b(unaff_EBP + -4,*(undefined4 *)(unaff_EBP + 8));
        }
        *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
      }
      if ((*(int *)(unaff_EBP + -0x20) != 0) && (*(int *)(unaff_EBP + -0xc) == 0)) {
LAB_00884f94:
        uVar11 = *(undefined4 *)(unaff_EBP + 8);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
        uVar20 = *(uint *)(unaff_EBP + -0x14);
LAB_00884fa4:
        FUN_00885034(uVar20,uVar11);
        goto LAB_00884fc4;
      }
      if (0x6f < uVar20) {
        if (uVar20 == 0x70) {
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          goto LAB_00884cd1;
        }
        if (uVar20 == 0x73) {
          if ('\0' < *(char *)(unaff_EBP + -5)) {
            *(undefined1 *)(unaff_EBP + -0x16) = 1;
          }
          pcVar17 = s_____00972ce0;
          goto LAB_00884b2a;
        }
        if (uVar20 == 0x75) goto LAB_00884cd1;
        if (uVar20 != 0x78) {
          if (uVar20 != 0x7b) goto LAB_00884a49;
          if ('\0' < *(char *)(unaff_EBP + -5)) {
            *(undefined1 *)(unaff_EBP + -0x16) = 1;
          }
          iVar13 = *(int *)(unaff_EBP + 0xc);
          pcVar17 = (char *)(iVar13 + 1);
          *(char **)(unaff_EBP + 0xc) = pcVar17;
          if (*pcVar17 == 0x5e) {
            pcVar17 = (char *)(iVar13 + 2);
            goto LAB_00884b2a;
          }
          goto LAB_00884b2e;
        }
LAB_00884807:
        unaff_EBX = *(int *)(unaff_EBP + -0x14);
        if (unaff_EBX == 0x2d) {
          *(undefined1 *)(unaff_EBP + -0x17) = 1;
LAB_00884a96:
          piVar2 = (int *)(unaff_EBP + -0xc);
          *piVar2 = *piVar2 + -1;
          if ((*piVar2 == 0) && (*(int *)(unaff_EBP + -0x20) != 0)) {
            *(undefined1 *)(unaff_EBP + -0xf) = 1;
          }
          else {
            *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
            unaff_EBX = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
            *(int *)(unaff_EBP + -0x14) = unaff_EBX;
          }
        }
        else if (unaff_EBX == 0x2b) goto LAB_00884a96;
        if (unaff_EBX != 0x30) goto LAB_00884d06;
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
        unaff_EBX = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
        *(int *)(unaff_EBP + -0x14) = unaff_EBX;
        if (((char)unaff_EBX == 'x') || ((char)unaff_EBX == 'X')) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          unaff_EBX = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
          *(int *)(unaff_EBP + -0x14) = unaff_EBX;
          uVar20 = 0x78;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          if (uVar20 != 0x78) goto code_r0x00884ae8;
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
          FUN_00885034(unaff_EBX,*(undefined4 *)(unaff_EBP + 8));
          unaff_EBX = 0x30;
LAB_00884d03:
          *(int *)(unaff_EBP + -0x14) = unaff_EBX;
        }
        goto LAB_00884d06;
      }
      if (uVar20 == 0x6f) {
LAB_00884cd1:
        unaff_EBX = *(int *)(unaff_EBP + -0x14);
        if (unaff_EBX == 0x2d) {
          *(undefined1 *)(unaff_EBP + -0x17) = 1;
        }
        else if (unaff_EBX != 0x2b) goto LAB_00884d06;
        piVar2 = (int *)(unaff_EBP + -0xc);
        *piVar2 = *piVar2 + -1;
        if ((*piVar2 != 0) || (*(int *)(unaff_EBP + -0x20) == 0)) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          unaff_EBX = FUN_0088501a(*(undefined4 *)(unaff_EBP + 8));
          goto LAB_00884d03;
        }
        *(undefined1 *)(unaff_EBP + -0xf) = 1;
        goto LAB_00884d06;
      }
      if (uVar20 == 99) {
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
          *(undefined4 *)(unaff_EBP + -0x20) = 1;
        }
        if ('\0' < *(char *)(unaff_EBP + -5)) {
          *(undefined1 *)(unaff_EBP + -0x16) = 1;
        }
        pcVar17 = &DAT_00972ce8;
LAB_00884b2a:
        *(undefined1 *)(unaff_EBP + -0x18) = 0xff;
LAB_00884b2e:
        _memset((void *)(unaff_EBP + -100),0,0x20);
        if ((*(int *)(unaff_EBP + -0x3c) == 0x7b) && (*pcVar17 == 0x5d)) {
          uVar20 = 0x5d;
          *(undefined1 *)(unaff_EBP + -0x59) = 0x20;
          pcVar17 = pcVar17 + 1;
        }
        else {
          uVar20 = (uint)*(byte *)(unaff_EBP + -0x35);
        }
        while (bVar4 = *pcVar17, bVar4 != 0x5d) {
          if (((bVar4 == 0x2d) && (bVar14 = (byte)uVar20, bVar14 != 0)) &&
             (bVar8 = pcVar17[1], bVar8 != 0x5d)) {
            if (bVar8 <= bVar14) {
              uVar20 = (uint)bVar8;
              bVar8 = bVar14;
            }
            if ((byte)uVar20 <= bVar8) {
              iVar13 = (bVar8 - uVar20) + 1;
              do {
                pbVar16 = (byte *)(unaff_EBP + -100 + (uVar20 >> 3));
                *pbVar16 = *pbVar16 | '\x01' << ((byte)uVar20 & 7);
                uVar20 = uVar20 + 1;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
            uVar20 = 0;
            pcVar17 = pcVar17 + 2;
          }
          else {
            uVar20 = (uint)bVar4;
            pbVar16 = (byte *)(unaff_EBP + -100 + (uint)(bVar4 >> 3));
            *pbVar16 = *pbVar16 | '\x01' << (bVar4 & 7);
            pcVar17 = pcVar17 + 1;
          }
        }
        if (*pcVar17 == 0) goto LAB_00884fc4;
        if (*(int *)(unaff_EBP + -0x3c) == 0x7b) {
          *(char **)(unaff_EBP + 0xc) = pcVar17;
        }
        uVar11 = *(undefined4 *)(unaff_EBP + 8);
        pbVar16 = *(byte **)(unaff_EBP + -0x2c);
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
        *(byte **)(unaff_EBP + -0x30) = pbVar16;
        FUN_00885034(*(undefined4 *)(unaff_EBP + -0x14),uVar11);
        while( true ) {
          if ((*(int *)(unaff_EBP + -0x20) != 0) &&
             (iVar13 = *(int *)(unaff_EBP + -0xc),
             *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1, iVar13 == 0))
          goto LAB_00884c93;
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          uVar20 = FUN_0088501a(uVar11);
          *(uint *)(unaff_EBP + -0x14) = uVar20;
          puVar7 = PTR_DAT_009726f0;
          if ((uVar20 == 0xffffffff) ||
             (bVar4 = (byte)uVar20,
             ((int)(char)(*(byte *)(unaff_EBP + -100 + ((int)uVar20 >> 3)) ^
                         *(byte *)(unaff_EBP + -0x18)) & 1 << (bVar4 & 7)) == 0)) break;
          if (*(char *)(unaff_EBP + -0xe) == '\0') {
            if (*(char *)(unaff_EBP + -0x16) == '\0') {
              *pbVar16 = bVar4;
              pbVar16 = pbVar16 + 1;
            }
            else {
              *(byte *)(unaff_EBP + -0x38) = bVar4;
              if ((puVar7[(uVar20 & 0xff) * 2 + 1] & 0x80) != 0) {
                *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
                uVar9 = FUN_0088501a(uVar11);
                *(undefined1 *)(unaff_EBP + -0x37) = uVar9;
              }
              FUN_00886b24(unaff_EBP + -0x3e,unaff_EBP + -0x38,DAT_009728fc);
              *(undefined2 *)pbVar16 = *(undefined2 *)(unaff_EBP + -0x3e);
              pbVar16 = pbVar16 + 2;
            }
            *(byte **)(unaff_EBP + -0x2c) = pbVar16;
          }
          else {
            *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
          }
        }
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
        FUN_00885034(uVar20,uVar11);
LAB_00884c93:
        if (*(byte **)(unaff_EBP + -0x30) == pbVar16) goto LAB_00884fc4;
        if ((*(char *)(unaff_EBP + -0xe) == '\0') &&
           (*(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1,
           *(int *)(unaff_EBP + -0x3c) != 99)) {
          if (*(char *)(unaff_EBP + -0x16) == '\0') {
            *(undefined1 *)*(undefined2 **)(unaff_EBP + -0x2c) = 0;
          }
          else {
            **(undefined2 **)(unaff_EBP + -0x2c) = 0;
          }
        }
        goto LAB_00884f25;
      }
      if (uVar20 == 100) goto LAB_00884cd1;
      if (uVar20 < 0x65) {
LAB_00884a49:
        if ((uint)*pbVar16 != *(uint *)(unaff_EBP + -0x14)) goto LAB_00884f94;
        *(char *)(unaff_EBP + -0x15) = *(char *)(unaff_EBP + -0x15) + -1;
        if (*(char *)(unaff_EBP + -0xe) == '\0') {
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x44);
        }
        goto LAB_00884f25;
      }
      if (uVar20 < 0x68) {
        iVar13 = *(int *)(unaff_EBP + -0x14);
        pcVar17 = (char *)(unaff_EBP + -0x1c4);
        if (iVar13 == 0x2d) {
          *(undefined1 *)(unaff_EBP + -0x1c4) = 0x2d;
          pcVar17 = (char *)(unaff_EBP + -0x1c3);
LAB_0088483d:
          uVar11 = *(undefined4 *)(unaff_EBP + 8);
          *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1;
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          iVar13 = FUN_0088501a(uVar11);
          *(int *)(unaff_EBP + -0x14) = iVar13;
        }
        else {
          if (iVar13 == 0x2b) goto LAB_0088483d;
          uVar11 = *(undefined4 *)(unaff_EBP + 8);
        }
        if ((*(int *)(unaff_EBP + -0x20) == 0) || (0x15d < *(int *)(unaff_EBP + -0xc))) {
          *(undefined4 *)(unaff_EBP + -0xc) = 0x15d;
        }
        while( true ) {
          if (DAT_009728fc < 2) {
            uVar20 = (byte)PTR_DAT_009726f0[iVar13 * 2] & 4;
          }
          else {
            uVar20 = FUN_0088329d(iVar13,4);
          }
          if ((uVar20 == 0) ||
             (iVar5 = *(int *)(unaff_EBP + -0xc),
             *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1, iVar5 == 0)) break;
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          *pcVar17 = (char)iVar13;
          pcVar17 = pcVar17 + 1;
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          iVar13 = FUN_0088501a(uVar11);
          *(int *)(unaff_EBP + -0x14) = iVar13;
        }
        if ((DAT_00972900 == (char)iVar13) &&
           (iVar5 = *(int *)(unaff_EBP + -0xc),
           *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1, iVar5 != 0)) {
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          iVar13 = FUN_0088501a(uVar11);
          *pcVar17 = DAT_00972900;
          *(int *)(unaff_EBP + -0x14) = iVar13;
          while( true ) {
            pcVar17 = pcVar17 + 1;
            if (DAT_009728fc < 2) {
              uVar20 = (byte)PTR_DAT_009726f0[iVar13 * 2] & 4;
            }
            else {
              uVar20 = FUN_0088329d(iVar13,4);
            }
            if ((uVar20 == 0) ||
               (iVar5 = *(int *)(unaff_EBP + -0xc),
               *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1, iVar5 == 0)) break;
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            *pcVar17 = (char)iVar13;
            *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
            iVar13 = FUN_0088501a(uVar11);
            *(int *)(unaff_EBP + -0x14) = iVar13;
          }
        }
        pcVar18 = pcVar17;
        if ((*(int *)(unaff_EBP + -0x1c) != 0) &&
           (((iVar13 == 0x65 || (iVar13 == 0x45)) &&
            (iVar5 = *(int *)(unaff_EBP + -0xc),
            *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1, iVar5 != 0)))) {
          *pcVar17 = 'e';
          pcVar18 = pcVar17 + 1;
          *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
          iVar13 = FUN_0088501a(uVar11);
          *(int *)(unaff_EBP + -0x14) = iVar13;
          if (iVar13 == 0x2d) {
            *pcVar18 = '-';
            pcVar18 = pcVar17 + 2;
LAB_00884964:
            iVar5 = *(int *)(unaff_EBP + -0xc);
            *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1;
            if (iVar5 != 0) goto LAB_00884973;
            *(undefined4 *)(unaff_EBP + -0xc) = 0;
          }
          else if (iVar13 == 0x2b) goto LAB_00884964;
          while( true ) {
            if (DAT_009728fc < 2) {
              uVar20 = (byte)PTR_DAT_009726f0[iVar13 * 2] & 4;
            }
            else {
              uVar20 = FUN_0088329d(iVar13,4);
            }
            if ((uVar20 == 0) ||
               (iVar5 = *(int *)(unaff_EBP + -0xc),
               *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1, iVar5 == 0)) break;
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
            *pcVar18 = (char)iVar13;
            pcVar18 = pcVar18 + 1;
LAB_00884973:
            *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + 1;
            iVar13 = FUN_0088501a(uVar11);
            *(int *)(unaff_EBP + -0x14) = iVar13;
          }
        }
        *(int *)(unaff_EBP + -4) = *(int *)(unaff_EBP + -4) + -1;
        FUN_00885034(iVar13,uVar11);
        if (*(int *)(unaff_EBP + -0x1c) == 0) goto LAB_00884fc4;
        if (*(char *)(unaff_EBP + -0xe) == '\0') {
          *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
          *pcVar18 = '\0';
          (*(code *)PTR_FUN_00970228)
                    (*(char *)(unaff_EBP + -0xd) + -1,*(undefined4 *)(unaff_EBP + -0x2c),
                     unaff_EBP + -0x1c4);
        }
        goto LAB_00884f25;
      }
      if (uVar20 == 0x69) {
        uVar20 = 100;
        goto LAB_00884807;
      }
      if (uVar20 != 0x6e) goto LAB_00884a49;
      unaff_EDI = *(int *)(unaff_EBP + -4);
    } while (*(char *)(unaff_EBP + -0xe) != '\0');
  } while( true );
}


