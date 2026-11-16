/* ptr_10006b2a - 0x10006b2a in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall ptr_10006b2a(undefined4 param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *in_EAX;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *unaff_EBX;
  byte *unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  int *in_stack_00000010;
  byte *in_stack_00000014;
  byte *pbStack00000018;
  byte *pbStack0000001c;
  uint in_stack_00000024;
  uint in_stack_00000028;
  int in_stack_0000002c;
  
code_r0x10006b2a:
  pbStack00000018 = (byte *)in_EAX[3];
  for (; unaff_EBX < pbStack00000018; unaff_EBX = unaff_EBX + 8) {
    if (in_stack_00000028 == 0) goto LAB_10006e35;
    in_stack_00000028 = in_stack_00000028 - 1;
    in_stack_0000002c = 0;
    in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
    unaff_EBP = unaff_EBP + 1;
  }
  pbStack00000018 =
       (byte *)(in_stack_00000010[2] +
               (*(uint *)(&DAT_10011500 + (int)pbStack00000018 * 4) & in_stack_00000024) * 8);
  in_stack_00000024 = in_stack_00000024 >> (pbStack00000018[1] & 0x1f);
  unaff_EBX = unaff_EBX + -(uint)pbStack00000018[1];
  bVar2 = *pbStack00000018;
  uVar6 = (uint)bVar2;
  if ((bVar2 & 0x10) == 0) {
    if ((bVar2 & 0x40) == 0) goto LAB_10006a7c;
    *in_stack_00000010 = 9;
    unaff_EDI[6] = (int)s_invalid_distance_code_10010260;
LAB_10006e81:
    *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
    *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
    unaff_EDI[1] = in_stack_00000028;
    unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
    *unaff_EDI = (int)unaff_EBP;
    *(byte **)(unaff_ESI + 0x34) = param_2;
    FUN_10008290(unaff_ESI,(int)unaff_EDI,-3);
    return;
  }
  in_stack_00000010[2] = bVar2 & 0xf;
  in_stack_00000010[3] = *(int *)(pbStack00000018 + 4);
  *in_stack_00000010 = 4;
  do {
    in_EAX = in_stack_00000010;
    switch(*in_stack_00000010) {
    case 0:
      if (((byte *)0x101 < in_stack_00000014) && (9 < in_stack_00000028)) {
        *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
        *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
        unaff_EDI[1] = in_stack_00000028;
        unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
        *unaff_EDI = (int)unaff_EBP;
        *(byte **)(unaff_ESI + 0x34) = param_2;
        in_stack_0000002c =
             FUN_10007060((uint)*(byte *)(in_stack_00000010 + 4),
                          (uint)*(byte *)((int)in_stack_00000010 + 0x11),in_stack_00000010[5],
                          in_stack_00000010[6],unaff_ESI,unaff_EDI);
        in_stack_00000028 = unaff_EDI[1];
        in_stack_00000024 = *(uint *)(unaff_ESI + 0x20);
        unaff_EBP = (byte *)*unaff_EDI;
        unaff_EBX = *(byte **)(unaff_ESI + 0x1c);
        param_2 = *(byte **)(unaff_ESI + 0x34);
        if (param_2 < *(byte **)(unaff_ESI + 0x30)) {
          in_stack_00000014 = *(byte **)(unaff_ESI + 0x30) + (-1 - (int)param_2);
        }
        else {
          in_stack_00000014 = (byte *)(*(int *)(unaff_ESI + 0x2c) - (int)param_2);
        }
        if (in_stack_0000002c != 0) {
          *in_stack_00000010 = (-(uint)(in_stack_0000002c != 1) & 2) + 7;
          break;
        }
      }
      *in_stack_00000010 = 1;
      in_stack_00000010[3] = (uint)*(byte *)(in_stack_00000010 + 4);
      in_stack_00000010[2] = in_stack_00000010[5];
    case 1:
      pbStack00000018 = (byte *)in_stack_00000010[3];
      for (; unaff_EBX < pbStack00000018; unaff_EBX = unaff_EBX + 8) {
        if (in_stack_00000028 == 0) goto LAB_10006e35;
        in_stack_00000028 = in_stack_00000028 - 1;
        in_stack_0000002c = 0;
        in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
        unaff_EBP = unaff_EBP + 1;
      }
      pbStack00000018 =
           (byte *)(in_stack_00000010[2] +
                   (*(uint *)(&DAT_10011500 + (int)pbStack00000018 * 4) & in_stack_00000024) * 8);
      in_stack_00000024 = in_stack_00000024 >> (pbStack00000018[1] & 0x1f);
      unaff_EBX = unaff_EBX + -(uint)pbStack00000018[1];
      bVar2 = *pbStack00000018;
      uVar6 = (uint)bVar2;
      if (uVar6 == 0) {
        in_stack_00000010[2] = *(int *)(pbStack00000018 + 4);
        *in_stack_00000010 = 6;
      }
      else if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
LAB_10006a7c:
          in_stack_00000010[3] = uVar6;
          in_stack_00000010[2] = (int)(pbStack00000018 + *(int *)(pbStack00000018 + 4) * 8);
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            *in_stack_00000010 = 9;
            unaff_EDI[6] = (int)s_invalid_literal_length_code_10010278;
            goto LAB_10006e81;
          }
          *in_stack_00000010 = 7;
        }
      }
      else {
        in_stack_00000010[2] = bVar2 & 0xf;
        in_stack_00000010[1] = *(int *)(pbStack00000018 + 4);
        *in_stack_00000010 = 2;
      }
      break;
    case 2:
      goto ptr_10006ab1;
    case 3:
      goto code_r0x10006b2a;
    case 4:
      pbStack00000018 = (byte *)in_stack_00000010[2];
      for (; unaff_EBX < pbStack00000018; unaff_EBX = unaff_EBX + 8) {
        if (in_stack_00000028 == 0) goto LAB_10006e35;
        in_stack_00000028 = in_stack_00000028 - 1;
        in_stack_0000002c = 0;
        in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
        unaff_EBP = unaff_EBP + 1;
      }
      in_stack_00000010[3] =
           in_stack_00000010[3] +
           (*(uint *)(&DAT_10011500 + (int)pbStack00000018 * 4) & in_stack_00000024);
      in_stack_00000024 = in_stack_00000024 >> ((byte)pbStack00000018 & 0x1f);
      unaff_EBX = unaff_EBX + -(int)pbStack00000018;
      *in_stack_00000010 = 5;
    case 5:
      if ((uint)((int)param_2 - *(int *)(unaff_ESI + 0x28)) < (uint)in_stack_00000010[3]) {
        iVar5 = (*(int *)(unaff_ESI + 0x2c) - *(int *)(unaff_ESI + 0x28)) - in_stack_00000010[3];
      }
      else {
        iVar5 = -in_stack_00000010[3];
      }
      pbStack0000001c = param_2 + iVar5;
      iVar5 = in_stack_00000010[1];
      while (iVar5 != 0) {
        pbVar7 = param_2;
        if (in_stack_00000014 == (byte *)0x0) {
          pbStack00000018 = *(byte **)(unaff_ESI + 0x2c);
          if (param_2 == pbStack00000018) {
            in_stack_00000014 = *(byte **)(unaff_ESI + 0x30);
            pbVar7 = *(byte **)(unaff_ESI + 0x28);
            if (in_stack_00000014 != pbVar7) {
              if (pbVar7 < in_stack_00000014) {
                in_stack_00000014 = in_stack_00000014 + (-1 - (int)pbVar7);
              }
              else {
                in_stack_00000014 = pbStack00000018 + -(int)pbVar7;
              }
              param_2 = pbVar7;
              if (in_stack_00000014 != (byte *)0x0) goto LAB_10006d21;
            }
          }
          *(byte **)(unaff_ESI + 0x34) = param_2;
          in_stack_0000002c = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
          pbVar7 = *(byte **)(unaff_ESI + 0x34);
          pbVar3 = *(byte **)(unaff_ESI + 0x30);
          if (pbVar7 < pbVar3) {
            in_stack_00000014 = pbVar3 + (-1 - (int)pbVar7);
          }
          else {
            in_stack_00000014 = (byte *)(*(int *)(unaff_ESI + 0x2c) - (int)pbVar7);
          }
          pbStack00000018 = *(byte **)(unaff_ESI + 0x2c);
          if ((pbVar7 == pbStack00000018) &&
             (pbVar4 = *(byte **)(unaff_ESI + 0x28), pbVar3 != pbVar4)) {
            pbVar7 = pbVar4;
            if (pbVar4 < pbVar3) {
              in_stack_00000014 = pbVar3 + (-1 - (int)pbVar4);
            }
            else {
              in_stack_00000014 = pbStack00000018 + -(int)pbVar4;
            }
          }
          if (in_stack_00000014 == (byte *)0x0) goto LAB_10006eb9;
        }
LAB_10006d21:
        *pbVar7 = *pbStack0000001c;
        param_2 = pbVar7 + 1;
        pbStack0000001c = pbStack0000001c + 1;
        in_stack_00000014 = in_stack_00000014 + -1;
        in_stack_0000002c = 0;
        if (pbStack0000001c == *(byte **)(unaff_ESI + 0x2c)) {
          pbStack0000001c = *(byte **)(unaff_ESI + 0x28);
        }
        piVar1 = in_stack_00000010 + 1;
        *piVar1 = *piVar1 + -1;
        iVar5 = *piVar1;
      }
      *in_stack_00000010 = 0;
      break;
    case 6:
      pbVar7 = param_2;
      if (in_stack_00000014 == (byte *)0x0) {
        pbStack00000018 = *(byte **)(unaff_ESI + 0x2c);
        if (param_2 == pbStack00000018) {
          in_stack_00000014 = *(byte **)(unaff_ESI + 0x30);
          pbVar7 = *(byte **)(unaff_ESI + 0x28);
          if (in_stack_00000014 != pbVar7) {
            if (pbVar7 < in_stack_00000014) {
              in_stack_00000014 = in_stack_00000014 + (-1 - (int)pbVar7);
            }
            else {
              in_stack_00000014 = pbStack00000018 + -(int)pbVar7;
            }
            param_2 = pbVar7;
            if (in_stack_00000014 != (byte *)0x0) goto LAB_10006e04;
          }
        }
        *(byte **)(unaff_ESI + 0x34) = param_2;
        in_stack_0000002c = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
        pbVar7 = *(byte **)(unaff_ESI + 0x34);
        pbVar3 = *(byte **)(unaff_ESI + 0x30);
        if (pbVar7 < pbVar3) {
          in_stack_00000014 = pbVar3 + (-1 - (int)pbVar7);
        }
        else {
          in_stack_00000014 = (byte *)(*(int *)(unaff_ESI + 0x2c) - (int)pbVar7);
        }
        pbStack00000018 = *(byte **)(unaff_ESI + 0x2c);
        if ((pbVar7 == pbStack00000018) && (pbVar4 = *(byte **)(unaff_ESI + 0x28), pbVar3 != pbVar4)
           ) {
          pbVar7 = pbVar4;
          if (pbVar4 < pbVar3) {
            in_stack_00000014 = pbVar3 + (-1 - (int)pbVar4);
          }
          else {
            in_stack_00000014 = pbStack00000018 + -(int)pbVar4;
          }
        }
        if (in_stack_00000014 == (byte *)0x0) {
LAB_10006eb9:
          *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
          *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
          unaff_EDI[1] = in_stack_00000028;
          unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
          *unaff_EDI = (int)unaff_EBP;
          *(byte **)(unaff_ESI + 0x34) = pbVar7;
          FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
          return;
        }
      }
LAB_10006e04:
      *pbVar7 = *(byte *)(in_stack_00000010 + 2);
      param_2 = pbVar7 + 1;
      in_stack_00000014 = in_stack_00000014 + -1;
      in_stack_0000002c = 0;
      *in_stack_00000010 = 0;
      break;
    case 7:
      if ((byte *)0x7 < unaff_EBX) {
        unaff_EBX = unaff_EBX + -8;
        in_stack_00000028 = in_stack_00000028 + 1;
        unaff_EBP = unaff_EBP + -1;
      }
      *(byte **)(unaff_ESI + 0x34) = param_2;
      iVar5 = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
      param_2 = *(byte **)(unaff_ESI + 0x34);
      if (*(byte **)(unaff_ESI + 0x30) != param_2) {
        *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
        *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
        unaff_EDI[1] = in_stack_00000028;
        unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
        *unaff_EDI = (int)unaff_EBP;
        *(byte **)(unaff_ESI + 0x34) = param_2;
        FUN_10008290(unaff_ESI,(int)unaff_EDI,iVar5);
        return;
      }
      *in_stack_00000010 = 8;
    case 8:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = in_stack_00000028;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(byte **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,1);
      return;
    case 9:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = in_stack_00000028;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(byte **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,-3);
      return;
    default:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = in_stack_00000028;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(byte **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,-2);
      return;
    }
  } while( true );
ptr_10006ab1:
  pbStack00000018 = (byte *)in_stack_00000010[2];
  for (; unaff_EBX < pbStack00000018; unaff_EBX = unaff_EBX + 8) {
    if (in_stack_00000028 == 0) {
LAB_10006e35:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(byte **)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = 0;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(byte **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
      return;
    }
    in_stack_00000028 = in_stack_00000028 - 1;
    in_stack_0000002c = 0;
    in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
    unaff_EBP = unaff_EBP + 1;
  }
  in_stack_00000010[1] =
       in_stack_00000010[1] +
       (*(uint *)(&DAT_10011500 + (int)pbStack00000018 * 4) & in_stack_00000024);
  in_stack_00000024 = in_stack_00000024 >> ((byte)pbStack00000018 & 0x1f);
  unaff_EBX = unaff_EBX + -(int)pbStack00000018;
  *in_stack_00000010 = 3;
  in_stack_00000010[3] = (uint)*(byte *)((int)in_stack_00000010 + 0x11);
  in_stack_00000010[2] = in_stack_00000010[6];
  goto code_r0x10006b2a;
}


