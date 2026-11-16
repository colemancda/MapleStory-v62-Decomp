/* ptr_10005ddc - 0x10005ddc in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void ptr_10005ddc(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *unaff_EBX;
  byte *unaff_EBP;
  byte *pbVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
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
  
code_r0x10005ddc:
  piVar7 = in_stack_0000004c;
  uVar9 = in_stack_00000018;
  for (; unaff_EBP < (byte *)0xe; unaff_EBP = unaff_EBP + 8) {
    if (in_stack_00000014 == (byte *)0x0) {
      unaff_EBX[7] = (uint)unaff_EBP;
      unaff_EBX[8] = uVar9;
      iVar5 = *in_stack_0000004c;
      *in_stack_0000004c = (int)in_stack_00000010;
      in_stack_0000004c[1] = 0;
      in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
      unaff_EBX[0xd] = (uint)in_stack_00000048;
      FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
      return;
    }
    in_stack_00000014 = in_stack_00000014 + -1;
    in_stack_00000050 = 0;
    uVar9 = uVar9 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
    in_stack_00000010 = in_stack_00000010 + 1;
  }
  unaff_EBX[1] = uVar9 & 0x3fff;
  if ((0x1d < (uVar9 & 0x1f)) || (0x3a0 < (uVar9 & 0x3e0))) {
    *unaff_EBX = 9;
    in_stack_0000004c[6] = (int)s_too_many_length_or_distance_symb_10010208;
    unaff_EBX[7] = (uint)unaff_EBP;
    unaff_EBX[8] = uVar9;
    iVar5 = *in_stack_0000004c;
    in_stack_0000004c[1] = (int)in_stack_00000014;
    *in_stack_0000004c = (int)in_stack_00000010;
    in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
    unaff_EBX[0xd] = (uint)in_stack_00000048;
    FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
    return;
  }
  uVar3 = (*(code *)in_stack_0000004c[8])
                    (in_stack_0000004c[10],((uVar9 & 0x3fff) >> 5 & 0x1f) + 0x102 + (uVar9 & 0x1f),4
                    );
  unaff_EBX[3] = uVar3;
  if (uVar3 == 0) {
    unaff_EBX[8] = uVar9;
    unaff_EBX[7] = (uint)unaff_EBP;
    piVar7[1] = (int)in_stack_00000014;
    piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
    *piVar7 = (int)in_stack_00000010;
    unaff_EBX[0xd] = (uint)in_stack_00000048;
    FUN_10008290((int)unaff_EBX,(int)piVar7,-4);
    return;
  }
  unaff_EBP = unaff_EBP + -0xe;
  unaff_EBX[2] = 0;
  *unaff_EBX = 4;
  uVar9 = uVar9 >> 0xe;
LAB_10005e8d:
  if (unaff_EBX[2] < (unaff_EBX[1] >> 10) + 4) {
    do {
      for (; unaff_EBP < (byte *)0x3; unaff_EBP = unaff_EBP + 8) {
        if (in_stack_00000014 == (byte *)0x0) {
          unaff_EBX[8] = uVar9;
          unaff_EBX[7] = (uint)unaff_EBP;
          piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
          *piVar7 = (int)in_stack_00000010;
          piVar7[1] = 0;
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)piVar7,in_stack_00000050);
          return;
        }
        in_stack_00000014 = in_stack_00000014 + -1;
        in_stack_00000050 = 0;
        uVar9 = uVar9 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
        in_stack_00000010 = in_stack_00000010 + 1;
      }
      *(uint *)(unaff_EBX[3] + *(int *)(&DAT_1000d138 + unaff_EBX[2] * 4) * 4) = uVar9 & 7;
      uVar3 = unaff_EBX[2];
      unaff_EBX[2] = uVar3 + 1;
      uVar9 = uVar9 >> 3;
      unaff_EBP = unaff_EBP + -3;
    } while (uVar3 + 1 < (unaff_EBX[1] >> 10) + 4);
  }
  uVar3 = unaff_EBX[2];
  while (uVar3 < 0x13) {
    *(undefined4 *)(unaff_EBX[3] + *(int *)(&DAT_1000d138 + unaff_EBX[2] * 4) * 4) = 0;
    uVar3 = unaff_EBX[2] + 1;
    unaff_EBX[2] = uVar3;
  }
  unaff_EBX[4] = 7;
  in_stack_0000001c =
       (byte *)FUN_10007b50((int *)unaff_EBX[3],unaff_EBX + 4,unaff_EBX + 5,unaff_EBX[9],(int)piVar7
                           );
  if (in_stack_0000001c == (byte *)0x0) {
    unaff_EBX[2] = 0;
    *unaff_EBX = 5;
    in_stack_0000001c = (byte *)0x0;
LAB_10005f76:
    if (unaff_EBX[2] < (unaff_EBX[1] >> 5 & 0x1f) + 0x102 + (unaff_EBX[1] & 0x1f)) {
      do {
        pbVar2 = (byte *)unaff_EBX[4];
        pbVar6 = unaff_EBP;
        if (unaff_EBP < pbVar2) {
          do {
            if (in_stack_00000014 == (byte *)0x0) goto LAB_10006557;
            in_stack_00000014 = in_stack_00000014 + -1;
            unaff_EBP = pbVar6 + 8;
            in_stack_00000050 = 0;
            pbVar2 = (byte *)unaff_EBX[4];
            uVar9 = uVar9 | (uint)*in_stack_00000010 << ((byte)pbVar6 & 0x1f);
            in_stack_00000010 = in_stack_00000010 + 1;
            pbVar6 = unaff_EBP;
          } while (unaff_EBP < pbVar2);
        }
        iVar5 = unaff_EBX[5] + (*(uint *)(&DAT_10011500 + (int)pbVar2 * 4) & uVar9) * 8;
        bVar1 = *(byte *)(iVar5 + 1);
        in_stack_0000001c = (byte *)(uint)bVar1;
        in_stack_00000038 = *(uint *)(iVar5 + 4);
        if (in_stack_00000038 < 0x10) {
          uVar9 = uVar9 >> (bVar1 & 0x1f);
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
          for (pbVar6 = unaff_EBP; pbVar6 < in_stack_00000034; pbVar6 = pbVar6 + 8) {
            if (in_stack_00000014 == (byte *)0x0) {
LAB_10006557:
              unaff_EBX[8] = uVar9;
              unaff_EBX[7] = (uint)pbVar6;
              piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
              *piVar7 = (int)in_stack_00000010;
              piVar7[1] = 0;
              unaff_EBX[0xd] = (uint)in_stack_00000048;
              FUN_10008290((int)unaff_EBX,(int)piVar7,in_stack_00000050);
              return;
            }
            in_stack_00000014 = in_stack_00000014 + -1;
            in_stack_00000050 = 0;
            uVar9 = uVar9 | (uint)*in_stack_00000010 << ((byte)pbVar6 & 0x1f);
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          uVar9 = uVar9 >> (bVar1 & 0x1f);
          in_stack_00000018 =
               in_stack_00000018 + (*(uint *)(&DAT_10011500 + (int)in_stack_00000020 * 4) & uVar9);
          uVar9 = uVar9 >> ((byte)in_stack_00000020 & 0x1f);
          unaff_EBP = pbVar6 + -(int)(in_stack_00000020 + (int)in_stack_0000001c);
          uVar3 = unaff_EBX[2];
          if ((unaff_EBX[1] >> 5 & 0x1f) + 0x102 + (unaff_EBX[1] & 0x1f) < in_stack_00000018 + uVar3
             ) {
LAB_10006596:
            (*(code *)piVar7[9])(piVar7[10],unaff_EBX[3]);
            *unaff_EBX = 9;
            piVar7[6] = (int)s_invalid_bit_length_repeat_100101ec;
            unaff_EBX[8] = uVar9;
            unaff_EBX[7] = (uint)unaff_EBP;
            iVar5 = *piVar7;
            piVar7[1] = (int)in_stack_00000014;
            *piVar7 = (int)in_stack_00000010;
            piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - iVar5));
            unaff_EBX[0xd] = (uint)in_stack_00000048;
            FUN_10008290((int)unaff_EBX,(int)piVar7,-3);
            return;
          }
          if (in_stack_00000038 == 0x10) {
            if (uVar3 == 0) goto LAB_10006596;
            uVar4 = *(undefined4 *)((unaff_EBX[3] - 4) + uVar3 * 4);
          }
          else {
            uVar4 = 0;
          }
          do {
            *(undefined4 *)(unaff_EBX[3] + uVar3 * 4) = uVar4;
            uVar3 = uVar3 + 1;
            in_stack_00000018 = in_stack_00000018 - 1;
          } while (in_stack_00000018 != 0);
          unaff_EBX[2] = uVar3;
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
                              &stack0x00000040,&stack0x0000003c,unaff_EBX[9],(int)piVar7);
    (*(code *)piVar7[9])(piVar7[10],unaff_EBX[3]);
    if (in_stack_0000001c == (byte *)0x0) {
      uVar3 = FUN_10006870((char)in_stack_00000018,(char)in_stack_00000020,in_stack_00000040,
                           in_stack_0000003c,(int)piVar7);
      if (uVar3 == 0) {
        unaff_EBX[8] = uVar9;
        unaff_EBX[7] = (uint)unaff_EBP;
        piVar7[1] = (int)in_stack_00000014;
        piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
        *piVar7 = (int)in_stack_00000010;
        unaff_EBX[0xd] = (uint)in_stack_00000048;
        FUN_10008290((int)unaff_EBX,(int)piVar7,-4);
        return;
      }
      unaff_EBX[1] = uVar3;
      *unaff_EBX = 6;
      do {
        unaff_EBX[8] = uVar9;
        unaff_EBX[7] = (uint)unaff_EBP;
        iVar5 = *piVar7;
        piVar7[1] = (int)in_stack_00000014;
        *piVar7 = (int)in_stack_00000010;
        piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - iVar5));
        unaff_EBX[0xd] = (uint)in_stack_00000048;
        iVar5 = FUN_100068b0((uint)unaff_EBX,piVar7,in_stack_00000050);
        if (iVar5 != 1) {
LAB_100066c1:
          FUN_10008290((int)unaff_EBX,(int)piVar7,iVar5);
          return;
        }
        in_stack_00000050 = 0;
        FUN_10007040(unaff_EBX[1],(int)piVar7);
        in_stack_00000018 = unaff_EBX[8];
        in_stack_00000048 = (byte *)unaff_EBX[0xd];
        in_stack_00000010 = (byte *)*piVar7;
        in_stack_00000014 = (byte *)piVar7[1];
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
          iVar5 = FUN_10008290((int)unaff_EBX,(int)piVar7,in_stack_00000050);
          pbVar2 = (byte *)unaff_EBX[0xd];
          if ((byte *)unaff_EBX[0xc] == pbVar2) {
            *unaff_EBX = 8;
LAB_100066e8:
            unaff_EBX[8] = in_stack_00000018;
            unaff_EBX[7] = (uint)unaff_EBP;
            piVar7[1] = (int)in_stack_00000014;
            piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
            *piVar7 = (int)in_stack_00000010;
            unaff_EBX[0xd] = (uint)pbVar2;
            FUN_10008290((int)unaff_EBX,(int)piVar7,1);
            return;
          }
          unaff_EBX[8] = in_stack_00000018;
          unaff_EBX[7] = (uint)unaff_EBP;
          piVar7[1] = (int)in_stack_00000014;
          piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
          *piVar7 = (int)in_stack_00000010;
          unaff_EBX[0xd] = (uint)pbVar2;
          goto LAB_100066c1;
        }
        *unaff_EBX = 0;
switchD_10005ba1_default:
        piVar7 = in_stack_0000004c;
        uVar9 = in_stack_00000018;
        switch(*unaff_EBX) {
        case 0:
          for (; in_stack_00000018 = uVar9, unaff_EBP < (byte *)0x3; unaff_EBP = unaff_EBP + 8) {
            if (in_stack_00000014 == (byte *)0x0) {
              unaff_EBX[7] = (uint)unaff_EBP;
              unaff_EBX[8] = uVar9;
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
            uVar9 = uVar9 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          unaff_EBX[6] = uVar9 & 1;
          switch((uVar9 & 7) >> 1) {
          case 0:
            uVar3 = (uint)(unaff_EBP + -3) & 7;
            in_stack_00000018 = (uVar9 >> 3) >> (sbyte)uVar3;
            unaff_EBP = unaff_EBP + -3 + -uVar3;
            *unaff_EBX = 1;
            break;
          case 1:
            FUN_10008260(&stack0x00000030,&stack0x0000002c,&stack0x00000028,&stack0x00000024);
            uVar3 = FUN_10006870((char)in_stack_00000030,(char)in_stack_0000002c,in_stack_00000028,
                                 in_stack_00000024,(int)in_stack_0000004c);
            unaff_EBX[1] = uVar3;
            if (uVar3 == 0) {
              unaff_EBX[7] = (uint)unaff_EBP;
              unaff_EBX[8] = uVar9;
              in_stack_0000004c[1] = (int)in_stack_00000014;
              in_stack_0000004c[2] =
                   (int)(in_stack_00000010 + (in_stack_0000004c[2] - *in_stack_0000004c));
              *in_stack_0000004c = (int)in_stack_00000010;
              unaff_EBX[0xd] = (uint)in_stack_00000048;
              FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-4);
              return;
            }
            in_stack_00000018 = uVar9 >> 3;
            unaff_EBP = unaff_EBP + -3;
            *unaff_EBX = 6;
            break;
          case 2:
            in_stack_00000018 = uVar9 >> 3;
            unaff_EBP = unaff_EBP + -3;
            *unaff_EBX = 3;
            break;
          case 3:
            *unaff_EBX = 9;
            in_stack_0000004c[6] = (int)s_invalid_block_type_1001024c;
            unaff_EBX[7] = (uint)(unaff_EBP + -3);
            unaff_EBX[8] = uVar9 >> 3;
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
              unaff_EBX[8] = uVar9;
              iVar5 = *in_stack_0000004c;
              in_stack_0000004c[1] = 0;
              *in_stack_0000004c = (int)in_stack_00000010;
              in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
              unaff_EBX[0xd] = (uint)in_stack_00000048;
              FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
              return;
            }
            in_stack_00000050 = 0;
            in_stack_00000014 = in_stack_00000014 + -1;
            uVar9 = uVar9 | (uint)*in_stack_00000010 << ((byte)unaff_EBP & 0x1f);
            in_stack_00000010 = in_stack_00000010 + 1;
          }
          uVar3 = uVar9 & 0xffff;
          if (~uVar9 >> 0x10 != uVar3) {
            *unaff_EBX = 9;
            in_stack_0000004c[6] = (int)s_invalid_stored_block_lengths_1001022c;
            unaff_EBX[7] = (uint)unaff_EBP;
            unaff_EBX[8] = uVar9;
            iVar5 = *in_stack_0000004c;
            *in_stack_0000004c = (int)in_stack_00000010;
            in_stack_0000004c[1] = (int)in_stack_00000014;
            in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
            unaff_EBX[0xd] = (uint)in_stack_00000048;
            FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
            return;
          }
          unaff_EBP = (byte *)0x0;
          unaff_EBX[1] = uVar3;
          in_stack_00000018 = 0;
          if (uVar3 == 0) goto LAB_10005dcb;
          *unaff_EBX = 2;
          goto switchD_10005ba1_default;
        case 2:
          if (in_stack_00000014 == (byte *)0x0) {
            unaff_EBX[8] = in_stack_00000018;
            unaff_EBX[7] = (uint)unaff_EBP;
            iVar5 = *in_stack_0000004c;
            *in_stack_0000004c = (int)in_stack_00000010;
            in_stack_0000004c[1] = 0;
            in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
            unaff_EBX[0xd] = (uint)in_stack_00000048;
            FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
            return;
          }
          if (in_stack_0000001c == (byte *)0x0) {
            if (in_stack_00000048 == (byte *)unaff_EBX[0xb]) {
              pbVar2 = (byte *)unaff_EBX[0xc];
              pbVar6 = (byte *)unaff_EBX[10];
              if (pbVar2 != pbVar6) {
                if (pbVar6 < pbVar2) {
                  in_stack_0000001c = pbVar2 + (-1 - (int)pbVar6);
                }
                else {
                  in_stack_0000001c = (byte *)unaff_EBX[0xb] + -(int)pbVar6;
                }
                in_stack_00000048 = pbVar6;
                if (in_stack_0000001c != (byte *)0x0) goto LAB_10005d66;
              }
            }
            unaff_EBX[0xd] = (uint)in_stack_00000048;
            in_stack_00000050 =
                 FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,in_stack_00000050);
            in_stack_00000048 = (byte *)unaff_EBX[0xd];
            pbVar2 = (byte *)unaff_EBX[0xc];
            if (in_stack_00000048 < pbVar2) {
              in_stack_0000001c = pbVar2 + (-1 - (int)in_stack_00000048);
            }
            else {
              in_stack_0000001c = (byte *)(unaff_EBX[0xb] - (int)in_stack_00000048);
            }
            in_stack_00000020 = (byte *)unaff_EBX[0xb];
            if ((in_stack_00000048 == in_stack_00000020) &&
               (pbVar6 = (byte *)unaff_EBX[10], pbVar2 != pbVar6)) {
              in_stack_00000048 = pbVar6;
              if (pbVar6 < pbVar2) {
                in_stack_0000001c = pbVar2 + (-1 - (int)pbVar6);
              }
              else {
                in_stack_0000001c = in_stack_00000020 + -(int)pbVar6;
              }
            }
            if (in_stack_0000001c == (byte *)0x0) {
              unaff_EBX[8] = in_stack_00000018;
              unaff_EBX[7] = (uint)unaff_EBP;
              piVar7[1] = (int)in_stack_00000014;
              piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
              *piVar7 = (int)in_stack_00000010;
              unaff_EBX[0xd] = (uint)in_stack_00000048;
              FUN_10008290((int)unaff_EBX,(int)piVar7,in_stack_00000050);
              return;
            }
          }
LAB_10005d66:
          in_stack_00000050 = 0;
          pbVar2 = (byte *)unaff_EBX[1];
          if (in_stack_00000014 < (byte *)unaff_EBX[1]) {
            pbVar2 = in_stack_00000014;
          }
          if (in_stack_0000001c < pbVar2) {
            pbVar2 = in_stack_0000001c;
          }
          pbVar6 = in_stack_00000010;
          pbVar8 = in_stack_00000048;
          for (uVar9 = (uint)pbVar2 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
            pbVar6 = pbVar6 + 4;
            pbVar8 = pbVar8 + 4;
          }
          for (uVar9 = (uint)pbVar2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pbVar8 = *pbVar6;
            pbVar6 = pbVar6 + 1;
            pbVar8 = pbVar8 + 1;
          }
          in_stack_00000010 = in_stack_00000010 + (int)pbVar2;
          uVar9 = unaff_EBX[1];
          in_stack_00000014 = in_stack_00000014 + -(int)pbVar2;
          in_stack_00000048 = in_stack_00000048 + (int)pbVar2;
          in_stack_0000001c = in_stack_0000001c + -(int)pbVar2;
          unaff_EBX[1] = uVar9 - (int)pbVar2;
          if (uVar9 - (int)pbVar2 == 0) {
LAB_10005dcb:
            *unaff_EBX = -(uint)(unaff_EBX[6] != 0) & 7;
          }
          goto switchD_10005ba1_default;
        case 3:
          goto code_r0x10005ddc;
        case 4:
          goto LAB_10005e8d;
        case 5:
          goto LAB_10005f76;
        case 6:
          break;
        case 7:
          goto LAB_10006686;
        case 8:
          pbVar2 = in_stack_00000048;
          goto LAB_100066e8;
        case 9:
          unaff_EBX[8] = in_stack_00000018;
          unaff_EBX[7] = (uint)unaff_EBP;
          iVar5 = *in_stack_0000004c;
          in_stack_0000004c[1] = (int)in_stack_00000014;
          *in_stack_0000004c = (int)in_stack_00000010;
          in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-3);
          return;
        default:
          unaff_EBX[8] = in_stack_00000018;
          unaff_EBX[7] = (uint)unaff_EBP;
          iVar5 = *in_stack_0000004c;
          in_stack_0000004c[1] = (int)in_stack_00000014;
          *in_stack_0000004c = (int)in_stack_00000010;
          in_stack_0000004c[2] = (int)(in_stack_00000010 + (in_stack_0000004c[2] - iVar5));
          unaff_EBX[0xd] = (uint)in_stack_00000048;
          FUN_10008290((int)unaff_EBX,(int)in_stack_0000004c,-2);
          return;
        }
      } while( true );
    }
  }
  else {
    (*(code *)piVar7[9])(piVar7[10],unaff_EBX[3]);
  }
  if (in_stack_0000001c == (byte *)0xfffffffd) {
    *unaff_EBX = 9;
  }
  unaff_EBX[8] = uVar9;
  unaff_EBX[7] = (uint)unaff_EBP;
  piVar7[1] = (int)in_stack_00000014;
  piVar7[2] = (int)(in_stack_00000010 + (piVar7[2] - *piVar7));
  *piVar7 = (int)in_stack_00000010;
  unaff_EBX[0xd] = (uint)in_stack_00000048;
  FUN_10008290((int)unaff_EBX,(int)piVar7,(int)in_stack_0000001c);
  return;
}


