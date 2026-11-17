/* ptr_0087e8dc - 0x0087e8dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 __fastcall ptr_0087e8dc(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  short sVar8;
  uint uVar9;
  int in_EAX;
  short *psVar10;
  short *psVar11;
  undefined4 uVar12;
  char *pcVar13;
  size_t sVar14;
  undefined4 *puVar15;
  int iVar16;
  byte unaff_BL;
  undefined2 *puVar17;
  int unaff_EBP;
  int iVar18;
  byte *pbVar19;
  uint unaff_EDI;
  char *_Str;
  int iVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  
code_r0x0087e8dc:
  if (in_EAX < 0x59) {
    if (in_EAX == 0x58) goto LAB_0087eb7f;
    if (in_EAX != 0x43) {
      if ((in_EAX == 0x45) || (in_EAX == 0x47)) {
        *(undefined4 *)(unaff_EBP + -0x40) = 1;
        unaff_BL = unaff_BL + 0x20;
        goto LAB_0087e972;
      }
      if (in_EAX == 0x53) {
        if ((*(ushort *)(unaff_EBP + -4) & 0x830) != 0) goto LAB_0087e910;
        *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | unaff_EDI;
        goto LAB_0087e910;
      }
      goto LAB_0087ed23;
    }
    if ((*(ushort *)(unaff_EBP + -4) & 0x830) == 0) {
      *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | unaff_EDI;
    }
  }
  else {
    if (in_EAX == 0x5a) {
      psVar10 = (short *)FUN_0087ef0b(unaff_EBP + 0x10);
      _Str = PTR_DAT_00970218;
      if ((psVar10 == (short *)0x0) || (iVar18 = *(int *)(psVar10 + 2), iVar18 == 0)) {
        *(undefined **)(unaff_EBP + -0xc) = PTR_DAT_00970218;
        goto LAB_0087eb00;
      }
      if ((*(uint *)(unaff_EBP + -4) & unaff_EDI) == 0) {
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(int *)(unaff_EBP + -0xc) = iVar18;
        sVar14 = (size_t)*psVar10;
        goto LAB_0087ed20;
      }
      sVar8 = *psVar10;
      *(int *)(unaff_EBP + -0xc) = iVar18;
      *(uint *)(unaff_EBP + -0x10) = (uint)(int)sVar8 >> 1;
      *(undefined4 *)(unaff_EBP + -0x2c) = 1;
      goto LAB_0087ed23;
    }
    if (in_EAX != 99) {
      if (in_EAX == 100) goto LAB_0087ebe4;
      goto LAB_0087ed23;
    }
  }
  if ((*(ushort *)(unaff_EBP + -4) & 0x810) == 0) {
    uVar7 = FUN_0087ef0b(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -0x24c) = uVar7;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    uVar12 = FUN_0087ef28();
    iVar18 = FUN_0088624f(unaff_EBP + -0x24c,uVar12);
    *(int *)(unaff_EBP + -0x10) = iVar18;
    if (iVar18 < 0) {
      *(undefined4 *)(unaff_EBP + -0x38) = 1;
    }
  }
  *(int *)(unaff_EBP + -0xc) = unaff_EBP + -0x24c;
LAB_0087ed23:
  if (*(int *)(unaff_EBP + -0x38) != 0) goto LAB_0087ee21;
  uVar9 = *(uint *)(unaff_EBP + -4);
  if ((uVar9 & 0x40) != 0) {
    if ((uVar9 & 0x100) == 0) {
      if ((uVar9 & 1) == 0) {
        if ((uVar9 & 2) == 0) goto LAB_0087ed5b;
        *(undefined1 *)(unaff_EBP + -0x16) = 0x20;
      }
      else {
        *(undefined1 *)(unaff_EBP + -0x16) = 0x2b;
      }
    }
    else {
      *(undefined1 *)(unaff_EBP + -0x16) = 0x2d;
    }
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
  }
LAB_0087ed5b:
  iVar18 = (*(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBP + -0x24)) - *(int *)(unaff_EBP + -0x10)
  ;
  if ((uVar9 & 0xc) == 0) {
    FUN_0087eea2(0x20,iVar18,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
  }
  FUN_0087eed3(unaff_EBP + -0x16,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + 8),
               unaff_EBP + -0x14);
  if (((uVar9 & 8) != 0) && ((uVar9 & 4) == 0)) {
    FUN_0087eea2(0x30,iVar18,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
  }
  if ((*(int *)(unaff_EBP + -0x2c) == 0) || (*(int *)(unaff_EBP + -0x10) < 1)) {
    FUN_0087eed3(*(undefined4 *)(unaff_EBP + -0xc),*(undefined4 *)(unaff_EBP + -0x10),
                 *(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
  }
  else {
    puVar17 = *(undefined2 **)(unaff_EBP + -0xc);
    iVar16 = *(int *)(unaff_EBP + -0x10);
    do {
      iVar20 = iVar16 + -1;
      uVar2 = *puVar17;
      puVar17 = puVar17 + 1;
      iVar16 = FUN_0088624f(unaff_EBP + -0x44,CONCAT22((short)((uint)iVar16 >> 0x10),uVar2));
      if (iVar16 < 1) break;
      FUN_0087eed3(unaff_EBP + -0x44,iVar16,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
      iVar16 = iVar20;
    } while (iVar20 != 0);
  }
  if ((*(byte *)(unaff_EBP + -4) & 4) != 0) {
    FUN_0087eea2(0x20,iVar18,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
  }
LAB_0087ee21:
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    FUN_0087aa78(*(undefined4 *)(unaff_EBP + -0x30));
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  do {
    pbVar4 = *(byte **)(unaff_EBP + 0xc);
    unaff_BL = *pbVar4;
    pbVar19 = pbVar4 + 1;
    *(byte **)(unaff_EBP + 0xc) = pbVar19;
    if (unaff_BL == 0) {
LAB_0087ee45:
      return *(undefined4 *)(unaff_EBP + -0x14);
    }
    param_2 = 0x200;
    unaff_EDI = 0x800;
    if (*(int *)(unaff_EBP + -0x14) < 0) goto LAB_0087ee45;
    if (((char)unaff_BL < ' ') || ('x' < (char)unaff_BL)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(byte *)((int)&PTR_LAB_008f3fc0 + (int)(char)unaff_BL) & 0xf;
    }
    cVar1 = (&DAT_008f3fe0)[uVar9 * 8 + *(int *)(unaff_EBP + -0x3c)];
    *(int *)(unaff_EBP + -0x3c) = (int)cVar1 >> 4;
    switch((int)cVar1 >> 4) {
    case 1:
      *(undefined4 *)(unaff_EBP + -8) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      break;
    case 2:
      if (unaff_BL == 0x20) {
        *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 2;
      }
      else if (unaff_BL == 0x23) {
        *(byte *)(unaff_EBP + -4) = *(byte *)(unaff_EBP + -4) | 0x80;
      }
      else if (unaff_BL == 0x2b) {
        *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 1;
      }
      else if (unaff_BL == 0x2d) {
        *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 4;
      }
      else if (unaff_BL == 0x30) {
        *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 8;
      }
      break;
    case 3:
      if (unaff_BL == 0x2a) {
        iVar18 = FUN_0087ef0b(unaff_EBP + 0x10);
        *(int *)(unaff_EBP + -0x28) = iVar18;
        if (-1 < iVar18) break;
        *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 4;
        iVar18 = -iVar18;
      }
      else {
        iVar18 = (char)unaff_BL + -0x30 + *(int *)(unaff_EBP + -0x28) * 10;
      }
      *(int *)(unaff_EBP + -0x28) = iVar18;
      break;
    case 4:
      *(undefined4 *)(unaff_EBP + -8) = 0;
      break;
    case 5:
      if (unaff_BL == 0x2a) {
        iVar18 = FUN_0087ef0b(unaff_EBP + 0x10);
        *(int *)(unaff_EBP + -8) = iVar18;
        if (iVar18 < 0) {
          *(undefined4 *)(unaff_EBP + -8) = 0xffffffff;
        }
      }
      else {
        *(int *)(unaff_EBP + -8) = (char)unaff_BL + -0x30 + *(int *)(unaff_EBP + -8) * 10;
      }
      break;
    case 6:
      if (unaff_BL != 0x49) {
        if (unaff_BL == 0x68) {
          *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 0x20;
        }
        else if (unaff_BL == 0x6c) {
          *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 0x10;
        }
        else if (unaff_BL == 0x77) {
          *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 0x800;
        }
        break;
      }
      if ((*pbVar19 == 0x36) && (pbVar4[2] == 0x34)) {
        *(byte *)(unaff_EBP + -3) = *(byte *)(unaff_EBP + -3) | 0x80;
        *(byte **)(unaff_EBP + 0xc) = pbVar4 + 3;
        break;
      }
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    case 0:
      puVar5 = PTR_DAT_009726f0;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      if ((puVar5[(uint)unaff_BL * 2 + 1] & 0x80) != 0) {
        FUN_0087ee6d((int)(char)unaff_BL,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
        unaff_BL = *pbVar19;
        *(byte **)(unaff_EBP + 0xc) = pbVar4 + 2;
      }
      FUN_0087ee6d((int)(char)unaff_BL,*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x14);
      break;
    case 7:
      goto switchD_0087e74b_caseD_7;
    }
  } while( true );
switchD_0087e74b_caseD_7:
  in_EAX = (int)(char)unaff_BL;
  if (0x67 < in_EAX) {
    if (in_EAX == 0x69) goto LAB_0087ebe4;
    if (in_EAX != 0x6e) goto code_r0x0087eb1d;
    puVar15 = (undefined4 *)FUN_0087ef0b(unaff_EBP + 0x10);
    if ((*(byte *)(unaff_EBP + -4) & 0x20) == 0) {
      *puVar15 = *(undefined4 *)(unaff_EBP + -0x14);
    }
    else {
      *(undefined2 *)puVar15 = *(undefined2 *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -0x38) = 1;
    goto LAB_0087ee21;
  }
  if (in_EAX < 0x65) goto code_r0x0087e8dc;
LAB_0087e972:
  *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 0x40;
  _Str = (char *)(unaff_EBP + -0x24c);
  *(char **)(unaff_EBP + -0xc) = _Str;
  if (*(int *)(unaff_EBP + -8) < 0) {
    *(undefined4 *)(unaff_EBP + -8) = 6;
  }
  else if (*(int *)(unaff_EBP + -8) == 0) {
    if (unaff_BL == 0x67) {
      *(undefined4 *)(unaff_EBP + -8) = 1;
    }
  }
  else {
    if (param_2 < *(int *)(unaff_EBP + -8)) {
      *(int *)(unaff_EBP + -8) = param_2;
    }
    if (0xa3 < *(int *)(unaff_EBP + -8)) {
      pcVar13 = _malloc(*(int *)(unaff_EBP + -8) + 0x15d);
      *(char **)(unaff_EBP + -0x30) = pcVar13;
      if (pcVar13 == (char *)0x0) {
        *(undefined4 *)(unaff_EBP + -8) = 0xa3;
      }
      else {
        *(char **)(unaff_EBP + -0xc) = pcVar13;
        _Str = pcVar13;
      }
    }
  }
  puVar15 = *(undefined4 **)(unaff_EBP + 0x10);
  *(undefined4 **)(unaff_EBP + 0x10) = puVar15 + 2;
  *(undefined4 *)(unaff_EBP + -0x4c) = *puVar15;
  *(undefined4 *)(unaff_EBP + -0x48) = puVar15[1];
  (*(code *)PTR_FUN_00970220)
            (unaff_EBP + -0x4c,_Str,(int)(char)unaff_BL,*(undefined4 *)(unaff_EBP + -8),
             *(undefined4 *)(unaff_EBP + -0x40));
  uVar9 = *(uint *)(unaff_EBP + -4) & 0x80;
  if ((uVar9 != 0) && (*(int *)(unaff_EBP + -8) == 0)) {
    (*(code *)PTR_FUN_0097022c)(_Str);
  }
  if ((unaff_BL == 0x67) && (uVar9 == 0)) {
    (*(code *)PTR_FUN_00970224)(_Str);
  }
  if (*_Str == '-') {
    *(byte *)(unaff_EBP + -3) = *(byte *)(unaff_EBP + -3) | 1;
    _Str = _Str + 1;
    *(char **)(unaff_EBP + -0xc) = _Str;
  }
LAB_0087eb00:
  sVar14 = _strlen(_Str);
  goto LAB_0087ed20;
LAB_0087ebe4:
  *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 0x40;
LAB_0087ebe8:
  *(undefined4 *)(unaff_EBP + -0x10) = 10;
  goto LAB_0087ebef;
code_r0x0087eb1d:
  if (in_EAX == 0x6f) {
    *(undefined4 *)(unaff_EBP + -0x10) = 8;
    if ((*(byte *)(unaff_EBP + -4) & 0x80) != 0) {
      *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) | 0x200;
    }
  }
  else {
    if (in_EAX == 0x70) {
      *(undefined4 *)(unaff_EBP + -8) = 8;
LAB_0087eb7f:
      *(undefined4 *)(unaff_EBP + -0x34) = 7;
    }
    else {
      if (in_EAX == 0x73) {
LAB_0087e910:
        iVar18 = 0x7fffffff;
        if (*(int *)(unaff_EBP + -8) != -1) {
          iVar18 = *(int *)(unaff_EBP + -8);
        }
        psVar10 = (short *)FUN_0087ef0b(unaff_EBP + 0x10);
        *(short **)(unaff_EBP + -0xc) = psVar10;
        puVar6 = PTR_DAT_0097021c;
        puVar5 = PTR_DAT_00970218;
        if ((*(ushort *)(unaff_EBP + -4) & 0x810) == 0) {
          psVar11 = psVar10;
          if (psVar10 == (short *)0x0) {
            *(undefined **)(unaff_EBP + -0xc) = PTR_DAT_00970218;
            psVar10 = (short *)puVar5;
            psVar11 = (short *)puVar5;
          }
          for (; (iVar18 != 0 && ((char)*psVar10 != '\0')); psVar10 = (short *)((int)psVar10 + 1)) {
            iVar18 = iVar18 + -1;
          }
          sVar14 = (int)psVar10 - (int)psVar11;
        }
        else {
          if (psVar10 == (short *)0x0) {
            *(undefined **)(unaff_EBP + -0xc) = PTR_DAT_0097021c;
            psVar10 = (short *)puVar6;
          }
          *(undefined4 *)(unaff_EBP + -0x2c) = 1;
          for (psVar11 = psVar10; (iVar18 != 0 && (*psVar11 != 0)); psVar11 = psVar11 + 1) {
            iVar18 = iVar18 + -1;
          }
          sVar14 = (int)psVar11 - (int)psVar10 >> 1;
        }
        goto LAB_0087ed20;
      }
      if (in_EAX == 0x75) goto LAB_0087ebe8;
      if (in_EAX != 0x78) goto LAB_0087ed23;
      *(undefined4 *)(unaff_EBP + -0x34) = 0x27;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0x10;
    if ((*(byte *)(unaff_EBP + -4) & 0x80) != 0) {
      *(undefined1 *)(unaff_EBP + -0x16) = 0x30;
      *(undefined4 *)(unaff_EBP + -0x24) = 2;
      *(char *)(unaff_EBP + -0x15) = *(char *)(unaff_EBP + -0x34) + 'Q';
    }
  }
LAB_0087ebef:
  if ((*(byte *)(unaff_EBP + -3) & 0x80) == 0) {
    if ((*(byte *)(unaff_EBP + -4) & 0x20) == 0) {
      if ((*(byte *)(unaff_EBP + -4) & 0x40) == 0) {
        uVar9 = FUN_0087ef0b(unaff_EBP + 0x10);
        uVar21 = (ulonglong)uVar9;
        goto LAB_0087ec42;
      }
      uVar9 = FUN_0087ef0b(unaff_EBP + 0x10);
    }
    else if ((*(byte *)(unaff_EBP + -4) & 0x40) == 0) {
      uVar9 = FUN_0087ef0b(unaff_EBP + 0x10);
      uVar9 = uVar9 & 0xffff;
    }
    else {
      sVar8 = FUN_0087ef0b(unaff_EBP + 0x10);
      uVar9 = (uint)sVar8;
    }
    uVar21 = (ulonglong)(int)uVar9;
  }
  else {
    uVar21 = FUN_0087ef18(unaff_EBP + 0x10);
  }
LAB_0087ec42:
  if ((((*(byte *)(unaff_EBP + -4) & 0x40) == 0) || (0xffffffff < (longlong)uVar21)) ||
     (-1 < (longlong)uVar21)) {
    *(ulonglong *)(unaff_EBP + -0x20) = uVar21;
  }
  else {
    *(int *)(unaff_EBP + -0x20) = -(int)uVar21;
    *(byte *)(unaff_EBP + -3) = *(byte *)(unaff_EBP + -3) | 1;
    *(uint *)(unaff_EBP + -0x1c) = -((int)(uVar21 >> 0x20) + (uint)((int)uVar21 != 0));
  }
  if ((*(byte *)(unaff_EBP + -3) & 0x80) == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (*(int *)(unaff_EBP + -8) < 0) {
    *(undefined4 *)(unaff_EBP + -8) = 1;
  }
  else {
    *(uint *)(unaff_EBP + -4) = *(uint *)(unaff_EBP + -4) & 0xfffffff7;
    if (0x200 < *(int *)(unaff_EBP + -8)) {
      *(undefined4 *)(unaff_EBP + -8) = 0x200;
    }
  }
  if (*(int *)(unaff_EBP + -0x20) == 0 && *(int *)(unaff_EBP + -0x1c) == 0) {
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  *(int *)(unaff_EBP + -0xc) = unaff_EBP + -0x4d;
  while ((iVar18 = *(int *)(unaff_EBP + -8),
         *(int *)(unaff_EBP + -8) = *(int *)(unaff_EBP + -8) + -1, 0 < iVar18 ||
         (*(int *)(unaff_EBP + -0x20) != 0 || *(int *)(unaff_EBP + -0x1c) != 0))) {
    iVar18 = *(int *)(unaff_EBP + -0x10);
    iVar16 = __aullrem(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),iVar18,
                       iVar18 >> 0x1f);
    iVar16 = iVar16 + 0x30;
    uVar22 = __aulldiv(*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),iVar18,
                       iVar18 >> 0x1f);
    *(undefined8 *)(unaff_EBP + -0x20) = uVar22;
    if (0x39 < iVar16) {
      iVar16 = iVar16 + *(int *)(unaff_EBP + -0x34);
    }
    puVar3 = *(undefined1 **)(unaff_EBP + -0xc);
    *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1;
    *puVar3 = (char)iVar16;
  }
  iVar18 = (unaff_EBP + -0x4d) - *(int *)(unaff_EBP + -0xc);
  *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + 1;
  *(int *)(unaff_EBP + -0x10) = iVar18;
  if (((*(byte *)(unaff_EBP + -3) & 2) == 0) ||
     ((**(char **)(unaff_EBP + -0xc) == '0' && (iVar18 != 0)))) goto LAB_0087ed23;
  *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0xc) + -1;
  sVar14 = iVar18 + 1;
  **(undefined1 **)(unaff_EBP + -0xc) = 0x30;
LAB_0087ed20:
  *(size_t *)(unaff_EBP + -0x10) = sVar14;
  goto LAB_0087ed23;
}


