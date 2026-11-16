/* ptr_10005cad - 0x10005cad in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ptr_10005cad(void)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *unaff_EBX;
  byte *unaff_EBP;
  byte *pbVar8;
  byte *pbVar9;
  byte *in_stack_00000010;
  byte *in_stack_00000014;
  uint in_stack_00000018;
  byte *in_stack_0000001c;
  byte *in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  byte *in_stack_00000034;
  uint in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  byte *in_stack_00000048;
  int *in_stack_0000004c;
  int in_stack_00000050;
  
code_r0x10005cad:
  piVar2 = in_stack_0000004c;
  if (in_stack_00000014 == (byte *)0x0) {
    unaff_EBX[8] = in_stack_00000018;
    unaff_EBX[7] = (uint)unaff_EBP;
    iVar6 = *in_stack_0000004c;
    *in_stack_0000004c = (int)in_stack_00000010;
    in_stack_0000004c[1] = 0;
    in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
    unaff_EBX[0xd] = (uint)in_stack_00000048;
    FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
    return;
  }
  if (in_stack_0000001c == (byte *)0x0) {
    if (in_stack_00000048 == (byte *)unaff_EBX[0xb]) {
      pbVar3 = (byte *)unaff_EBX[0xc];
      pbVar8 = (byte *)unaff_EBX[10];
      if (pbVar3 != pbVar8) {
        if (pbVar8 < pbVar3) {
          in_stack_0000001c = pbVar3 + (-1 - (int)pbVar8);
        }
        else {
          in_stack_0000001c = (byte *)unaff_EBX[0xb] + -(int)pbVar8;
        }
        in_stack_00000048 = pbVar8;
        if (in_stack_0000001c != (byte *)0x0) goto LAB_10005d66;
      }
    }
    unaff_EBX[0xd] = (uint)in_stack_00000048;
    in_stack_00000050 = FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
    in_stack_00000048 = (byte *)unaff_EBX[0xd];
    pbVar3 = (byte *)unaff_EBX[0xc];
    if (in_stack_00000048 < pbVar3) {
      in_stack_0000001c = pbVar3 + (-1 - (int)in_stack_00000048);
    }
    else {
      in_stack_0000001c = (byte *)(unaff_EBX[0xb] - (int)in_stack_00000048);
    }
    in_stack_00000020 = (byte *)unaff_EBX[0xb];
    if ((in_stack_00000048 == in_stack_00000020) &&
       (pbVar8 = (byte *)unaff_EBX[10], pbVar3 != pbVar8)) {
      in_stack_00000048 = pbVar8;
      if (pbVar8 < pbVar3) {
        in_stack_0000001c = pbVar3 + (-1 - (int)pbVar8);
      }
      else {
        in_stack_0000001c = in_stack_00000020 + -(int)pbVar8;
      }
    }
    if (in_stack_0000001c == (byte *)0x0) {
      unaff_EBX[8] = in_stack_00000018;
      unaff_EBX[7] = (uint)unaff_EBP;
      piVar2[1] = (int)in_stack_00000014;
      piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
      *piVar2 = (int)in_stack_00000010;
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      FUN_10008290((int)unaff_EBX,(int)piVar2,in_stack_00000050);
      return;
    }
  }
LAB_10005d66:
  in_stack_00000050 = 0;
  pbVar3 = (byte *)unaff_EBX[1];
  if (in_stack_00000014 < (byte *)unaff_EBX[1]) {
    pbVar3 = in_stack_00000014;
  }
  if (in_stack_0000001c < pbVar3) {
    pbVar3 = in_stack_0000001c;
  }
  pbVar8 = in_stack_00000010;
  pbVar9 = in_stack_00000048;
  for (uVar7 = (uint)pbVar3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
    pbVar8 = pbVar8 + 4;
    pbVar9 = pbVar9 + 4;
  }
  for (uVar7 = (uint)pbVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pbVar9 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar9 = pbVar9 + 1;
  }
  in_stack_00000010 = in_stack_00000010 + (int)pbVar3;
  uVar7 = unaff_EBX[1];
  in_stack_00000014 = in_stack_00000014 + -(int)pbVar3;
  in_stack_00000048 = in_stack_00000048 + (int)pbVar3;
  in_stack_0000001c = in_stack_0000001c + -(int)pbVar3;
  unaff_EBX[1] = uVar7 - (int)pbVar3;
  if (uVar7 - (int)pbVar3 != 0) goto switchD_10005ba1_default;
LAB_10005dcb:
  *unaff_EBX = -(uint)(unaff_EBX[6] != 0) & 7;
switchD_10005ba1_default:
  do {
    piVar2 = in_stack_0000004c;
    uVar7 = in_stack_00000018;
    switch(*unaff_EBX) {
    case 0:
      for (; in_stack_00000018 = uVar7, unaff_EBP < (byte *)0x3; unaff_EBP = unaff_EBP + 8) {
        if (in_stack_00000014 == (byte *)0x0) {
          unaff_EBX[7] = (uint)unaff_EBP;
          unaff_EBX[8] = uVar7;
          in_stack_0000004c[1] = 0;
          in_stack_0000004c[2] =
               (int)(in_stack_00000010 + (in_stack_0000004c[2] - *in_stack_0000004c));
          *in_stack_0000004c = (int)in_stack_00000010;
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
          return;
        }
        in_stack_00000014 = in_stack_00000014 + -1;
        in_stack_00000050 = 0;
        uVar7 = uVar7 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
        in_stack_00000010 = in_stack_00000010 + 1;
      }
      unaff_EBX[6] = uVar7 & 1;
      switch((uVar7 & 7) >> 1) {
      case 0:
        uVar5 = (uint)(unaff_EBP + -3) & 7;
        in_stack_00000018 = (uVar7 >> 3) >> (sbyte)uVar5;
        unaff_EBP = unaff_EBP + -3 + -uVar5;
        *unaff_EBX = 1;
        break;
      case 1:
        FUN_10008260(&stack0x00000030,&stack0x0000002c,&stack0x00000028,&stack0x00000024);
        uVar5 = FUN_10006870((char)in_stack_00000030,(char)in_stack_0000002c,in_stack_00000028,
                             in_stack_00000024,(int)in_stack_0000004c);
        unaff_EBX[1] = uVar5;
        if (uVar5 == 0) {
          unaff_EBX[7] = (uint)unaff_EBP;
          unaff_EBX[8] = uVar7;
          in_stack_0000004c[1] = (int)in_stack_00000014;
          in_stack_0000004c[2] =
               (int)(in_stack_00000010 + (in_stack_0000004c[2] - *in_stack_0000004c));
          *in_stack_0000004c = (int)in_stack_00000010;
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-4);
          return;
        }
        in_stack_00000018 = uVar7 >> 3;
        unaff_EBP = unaff_EBP + -3;
        *unaff_EBX = 6;
        break;
      case 2:
        in_stack_00000018 = uVar7 >> 3;
        unaff_EBP = unaff_EBP + -3;
        *unaff_EBX = 3;
        break;
      case 3:
        *unaff_EBX = 9;
        in_stack_0000004c[6] = (int)s_invalid_block_type_1001024c;
        unaff_EBX[7] = (uint)(unaff_EBP + -3);
        unaff_EBX[8] = uVar7 >> 3;
        in_stack_0000004c[1] = (int)in_stack_00000014;
        in_stack_0000004c[2] =
             (int)(in_stack_00000010 + (in_stack_0000004c[2] - *in_stack_0000004c));
        *in_stack_0000004c = (int)in_stack_00000010;
        unaff_EBX[0xd] = (uint)in_stack_00000048;
        FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
        return;
      }
      goto switchD_10005ba1_default;
    case 1:
      for (; unaff_EBP < (byte *)0x20; unaff_EBP = unaff_EBP + 8) {
        if (in_stack_00000014 == (byte *)0x0) {
          unaff_EBX[7] = (uint)unaff_EBP;
          unaff_EBX[8] = uVar7;
          iVar6 = *in_stack_0000004c;
          in_stack_0000004c[1] = 0;
          *in_stack_0000004c = (int)in_stack_00000010;
          in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
          return;
        }
        in_stack_00000050 = 0;
        in_stack_00000014 = in_stack_00000014 + -1;
        uVar7 = uVar7 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
        in_stack_00000010 = in_stack_00000010 + 1;
      }
      uVar5 = uVar7 & 0xffff;
      if (~uVar7 >> 0x10 != uVar5) {
        *unaff_EBX = 9;
        in_stack_0000004c[6] = (int)s_invalid_stored_block_lengths_1001022c;
        unaff_EBX[7] = (uint)unaff_EBP;
        unaff_EBX[8] = uVar7;
        iVar6 = *in_stack_0000004c;
        *in_stack_0000004c = (int)in_stack_00000010;
        in_stack_0000004c[1] = (int)in_stack_00000014;
        in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
        unaff_EBX[0xd] = (uint)in_stack_00000048;
        FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
        return;
      }
      unaff_EBP = (byte *)0x0;
      unaff_EBX[1] = uVar5;
      in_stack_00000018 = 0;
      if (uVar5 != 0) {
        *unaff_EBX = 2;
        goto switchD_10005ba1_default;
      }
      goto LAB_10005dcb;
    case 2:
      goto code_r0x10005cad;
    case 3:
      for (; unaff_EBP < (byte *)0xe; unaff_EBP = unaff_EBP + 8) {
        if (in_stack_00000014 == (byte *)0x0) {
          unaff_EBX[7] = (uint)unaff_EBP;
          unaff_EBX[8] = uVar7;
          iVar6 = *in_stack_0000004c;
          *in_stack_0000004c = (int)in_stack_00000010;
          in_stack_0000004c[1] = 0;
          in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
          return;
        }
        in_stack_00000014 = in_stack_00000014 + -1;
        in_stack_00000050 = 0;
        uVar7 = uVar7 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
        in_stack_00000010 = in_stack_00000010 + 1;
      }
      unaff_EBX[1] = uVar7 & 0x3fff;
      if ((0x1d < (uVar7 & 0x1f)) || (0x3a0 < (uVar7 & 0x3e0))) {
        *unaff_EBX = 9;
        in_stack_0000004c[6] = (int)s_too_many_length_or_distance_symb_10010208;
        unaff_EBX[7] = (uint)unaff_EBP;
        unaff_EBX[8] = uVar7;
        iVar6 = *in_stack_0000004c;
        in_stack_0000004c[1] = (int)in_stack_00000014;
        *in_stack_0000004c = (int)in_stack_00000010;
        in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
        unaff_EBX[0xd] = (uint)in_stack_00000048;
        FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
        return;
      }
      uVar5 = (*(code *)in_stack_0000004c[8])
                        (in_stack_0000004c[10],
                         ((uVar7 & 0x3fff) >> 5 & 0x1f) + 0x102 + (uVar7 & 0x1f),4);
      unaff_EBX[3] = uVar5;
      if (uVar5 == 0) {
        unaff_EBX[8] = uVar7;
        unaff_EBX[7] = (uint)unaff_EBP;
        piVar2[1] = (int)in_stack_00000014;
        piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
        *piVar2 = (int)in_stack_00000010;
        unaff_EBX[0xd] = (uint)in_stack_00000048;
        FUN_10008290((int)unaff_EBX,(int)piVar2,-4);
        return;
      }
      uVar7 = uVar7 >> 0xe;
      unaff_EBP = unaff_EBP + -0xe;
      unaff_EBX[2] = 0;
      *unaff_EBX = 4;
      break;
    case 4:
      break;
    case 5:
      goto LAB_10005f76;
    case 6:
      goto LAB_100061c4;
    case 7:
      goto LAB_10006686;
    case 8:
      pbVar3 = in_stack_00000048;
      goto LAB_100066e8;
    case 9:
      unaff_EBX[8] = in_stack_00000018;
      unaff_EBX[7] = (uint)unaff_EBP;
      iVar6 = *in_stack_0000004c;
      in_stack_0000004c[1] = (int)in_stack_00000014;
      *in_stack_0000004c = (int)in_stack_00000010;
      in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
      return;
    default:
      unaff_EBX[8] = in_stack_00000018;
      unaff_EBX[7] = (uint)unaff_EBP;
      iVar6 = *in_stack_0000004c;
      in_stack_0000004c[1] = (int)in_stack_00000014;
      *in_stack_0000004c = (int)in_stack_00000010;
      in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar6));
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-2);
      return;
    }
    if (unaff_EBX[2] < (unaff_EBX[1] >> 10) + 4) {
      do {
        for (; unaff_EBP < (byte *)0x3; unaff_EBP = unaff_EBP + 8) {
          if (in_stack_00000014 == (byte *)0x0) {
            unaff_EBX[8] = uVar7;
            unaff_EBX[7] = (uint)unaff_EBP;
            piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
            *piVar2 = (int)in_stack_00000010;
            piVar2[1] = 0;
            unaff_EBX[0xd] = (uint)in_stack_00000048;
            FUN_10008290((int)unaff_EBX,(int)piVar2,in_stack_00000050);
            return;
          }
          in_stack_00000014 = in_stack_00000014 + -1;
          in_stack_00000050 = 0;
          uVar7 = uVar7 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
          in_stack_00000010 = in_stack_00000010 + 1;
        }
        *(uint *)(unaff_EBX[3] + *(int *)(&DAT_1000d138 + unaff_EBX[2] * 4) * 4) = uVar7 & 7;
        uVar5 = unaff_EBX[2];
        unaff_EBX[2] = uVar5 + 1;
        uVar7 = uVar7 >> 3;
        unaff_EBP = unaff_EBP + -3;
      } while (uVar5 + 1 < (unaff_EBX[1] >> 10) + 4);
    }
    uVar5 = unaff_EBX[2];
    while (uVar5 < 0x13) {
      *(undefined4 *)(unaff_EBX[3] + *(int *)(&DAT_1000d138 + unaff_EBX[2] * 4) * 4) = 0;
      uVar5 = unaff_EBX[2] + 1;
      unaff_EBX[2] = uVar5;
    }
    unaff_EBX[4] = 7;
    in_stack_0000001c =
         (byte *)FUN_10007b50((int *)unaff_EBX[3],unaff_EBX + 4,unaff_EBX + 5,unaff_EBX[9],
                              (int)piVar2);
    if (in_stack_0000001c != (byte *)0x0) {
      (*(code *)piVar2[9])(piVar2[10],unaff_EBX[3]);
LAB_100065ef:
      if (in_stack_0000001c == (byte *)0xfffffffd) {
        *unaff_EBX = 9;
      }
      unaff_EBX[8] = uVar7;
      unaff_EBX[7] = (uint)unaff_EBP;
      piVar2[1] = (int)in_stack_00000014;
      piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
      *piVar2 = (int)in_stack_00000010;
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      FUN_10008290((int)unaff_EBX,(int)piVar2,(int)in_stack_0000001c);
      return;
    }
    unaff_EBX[2] = 0;
    *unaff_EBX = 5;
    in_stack_0000001c = (byte *)0x0;
LAB_10005f76:
    if (unaff_EBX[2] < (unaff_EBX[1] >> 5 & 0x1f) + 0x102 + (unaff_EBX[1] & 0x1f)) {
      do {
        pbVar3 = (byte *)unaff_EBX[4];
        pbVar8 = unaff_EBP;
        if (unaff_EBP < pbVar3) {
          do {
            if (in_stack_00000014 == (byte *)0x0) goto LAB_10006557;
            in_stack_00000014 = in_stack_00000014 + -1;
            unaff_EBP = pbVar8 + 8;
            in_stack_00000050 = 0;
            pbVar3 = (byte *)unaff_EBX[4];
            uVar7 = uVar7 | (uint)*in_stack_00000010 << ((byte)pbVar8 & 0x1f);
            in_stack_00000010 = in_stack_00000010 + 1;
            pbVar8 = unaff_EBP;
          } while (unaff_EBP < pbVar3);
        }
        iVar6 = unaff_EBX[5] + (*(uint *)(&DAT_10011500 + (int)pbVar3 * 4) & uVar7) * 8;
        bVar1 = *(byte *)(iVar6 + 1);
        in_stack_0000001c = (byte *)(uint)bVar1;
        in_stack_00000038 = *(uint *)(iVar6 + 4);
        if (in_stack_00000038 < 0x10) {
          uVar7 = uVar7 >> (bVar1 & 0x1f);
          unaff_EBP = unaff_EBP + -(int)in_stack_0000001c;
          *(uint *)(unaff_EBX[3] + unaff_EBX[2] * 4) = in_stack_00000038;
          unaff_EBX[2] = unaff_EBX[2] + 1;
        }
        else {
          if (in_stack_00000038 == 0x12) {
            in_stack_00000020 = (byte *)0x7;
          }
          else {
            in_stack_00000020 = (byte *)(in_stack_00000038 - 0xe);
          }
          in_stack_00000018 = ((in_stack_00000038 != 0x12) - 1 & 8) + 3;
          in_stack_00000034 = in_stack_00000020 + (int)in_stack_0000001c;
          for (pbVar8 = unaff_EBP; pbVar8 < in_stack_00000034; pbVar8 = pbVar8 + 8) {
            if (in_stack_00000014 == (byte *)0x0) {
LAB_10006557:
              unaff_EBX[8] = uVar7;
              unaff_EBX[7] = (uint)pbVar8;
              piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
              *piVar2 = (int)in_stack_00000010;
              piVar2[1] = 0;
              unaff_EBX[0xd] = (uint)in_stack_00000048;
              FUN_10008290((int)unaff_EBX,(int)piVar2,in_stack_00000050);
              return;
            }
            in_stack_00000014 = in_stack_00000014 + -1;
            in_stack_00000050 = 0;
            uVar7 = uVar7 | (uint)*in_stack_00000010 << ((byte)pbVar8 & 0x1f);
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          uVar7 = uVar7 >> (bVar1 & 0x1f);
          in_stack_00000018 =
               in_stack_00000018 + (*(uint *)(&DAT_10011500 + (int)in_stack_00000020 * 4) & uVar7);
          uVar7 = uVar7 >> ((byte)in_stack_00000020 & 0x1f);
          unaff_EBP = pbVar8 + -(int)(in_stack_00000020 + (int)in_stack_0000001c);
          uVar5 = unaff_EBX[2];
          if ((unaff_EBX[1] >> 5 & 0x1f) + 0x102 + (unaff_EBX[1] & 0x1f) < in_stack_00000018 + uVar5
             ) {
LAB_10006596:
            (*(code *)piVar2[9])(piVar2[10],unaff_EBX[3]);
            *unaff_EBX = 9;
            piVar2[6] = (int)s_invalid_bit_length_repeat_100101ec;
            unaff_EBX[8] = uVar7;
            unaff_EBX[7] = (uint)unaff_EBP;
            iVar6 = *piVar2;
            piVar2[1] = (int)in_stack_00000014;
            *piVar2 = (int)in_stack_00000010;
            piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - iVar6));
            unaff_EBX[0xd] = (uint)in_stack_00000048;
            FUN_10008290((int)unaff_EBX,(int)piVar2,-3);
            return;
          }
          if (in_stack_00000038 == 0x10) {
            if (uVar5 == 0) goto LAB_10006596;
            uVar4 = *(undefined4 *)((unaff_EBX[3] - 4) + uVar5 * 4);
          }
          else {
            uVar4 = 0;
          }
          do {
            *(undefined4 *)(unaff_EBX[3] + uVar5 * 4) = uVar4;
            uVar5 = uVar5 + 1;
            in_stack_00000018 = in_stack_00000018 - 1;
          } while (in_stack_00000018 != 0);
          unaff_EBX[2] = uVar5;
          in_stack_00000018 = 0;
        }
      } while (unaff_EBX[2] < (unaff_EBX[1] >> 5 & 0x1f) + 0x102 + (unaff_EBX[1] & 0x1f));
    }
    unaff_EBX[5] = 0;
    in_stack_00000018 = 9;
    in_stack_00000020 = (byte *)0x6;
    in_stack_0000001c =
         (byte *)FUN_100080d0((unaff_EBX[1] & 0x1f) + 0x101,(unaff_EBX[1] >> 5 & 0x1f) + 1,
                              (int *)unaff_EBX[3],&stack0x00000018,(uint *)&stack0x00000020,
                              &stack0x00000040,&stack0x0000003c,unaff_EBX[9],(int)piVar2);
    (*(code *)piVar2[9])(piVar2[10],unaff_EBX[3]);
    if (in_stack_0000001c != (byte *)0x0) goto LAB_100065ef;
    uVar5 = FUN_10006870((char)in_stack_00000018,(char)in_stack_00000020,in_stack_00000040,
                         in_stack_0000003c,(int)piVar2);
    if (uVar5 == 0) {
      unaff_EBX[8] = uVar7;
      unaff_EBX[7] = (uint)unaff_EBP;
      piVar2[1] = (int)in_stack_00000014;
      piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
      *piVar2 = (int)in_stack_00000010;
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      FUN_10008290((int)unaff_EBX,(int)piVar2,-4);
      return;
    }
    unaff_EBX[1] = uVar5;
    *unaff_EBX = 6;
LAB_100061c4:
    unaff_EBX[8] = uVar7;
    unaff_EBX[7] = (uint)unaff_EBP;
    iVar6 = *piVar2;
    piVar2[1] = (int)in_stack_00000014;
    *piVar2 = (int)in_stack_00000010;
    piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - iVar6));
    unaff_EBX[0xd] = (uint)in_stack_00000048;
    iVar6 = FUN_100068b0((uint)unaff_EBX,piVar2,in_stack_00000050);
    if (iVar6 != 1) {
LAB_100066c1:
      FUN_10008290((int)unaff_EBX,(int)piVar2,iVar6);
      return;
    }
    in_stack_00000050 = 0;
    FUN_10007040(unaff_EBX[1],(int)piVar2);
    in_stack_00000018 = unaff_EBX[8];
    in_stack_00000048 = (byte *)unaff_EBX[0xd];
    in_stack_00000010 = (byte *)*piVar2;
    in_stack_00000014 = (byte *)piVar2[1];
    unaff_EBP = (byte *)unaff_EBX[7];
    if (in_stack_00000048 < (byte *)unaff_EBX[0xc]) {
      in_stack_0000001c = (byte *)unaff_EBX[0xc] + (-1 - (int)in_stack_00000048);
    }
    else {
      in_stack_0000001c = (byte *)(unaff_EBX[0xb] - (int)in_stack_00000048);
    }
    if (unaff_EBX[6] != 0) {
      *unaff_EBX = 7;
LAB_10006686:
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      iVar6 = FUN_10008290((int)unaff_EBX,(int)piVar2,in_stack_00000050);
      pbVar3 = (byte *)unaff_EBX[0xd];
      if ((byte *)unaff_EBX[0xc] == pbVar3) {
        *unaff_EBX = 8;
LAB_100066e8:
        unaff_EBX[8] = in_stack_00000018;
        unaff_EBX[7] = (uint)unaff_EBP;
        piVar2[1] = (int)in_stack_00000014;
        piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
        *piVar2 = (int)in_stack_00000010;
        unaff_EBX[0xd] = (uint)pbVar3;
        FUN_10008290((int)unaff_EBX,(int)piVar2,1);
        return;
      }
      unaff_EBX[8] = in_stack_00000018;
      unaff_EBX[7] = (uint)unaff_EBP;
      piVar2[1] = (int)in_stack_00000014;
      piVar2[2] = (int)(in_stack_00000010 + (piVar2[2] - *piVar2));
      *piVar2 = (int)in_stack_00000010;
      unaff_EBX[0xd] = (uint)pbVar3;
      goto LAB_100066c1;
    }
    *unaff_EBX = 0;
  } while( true );
}


