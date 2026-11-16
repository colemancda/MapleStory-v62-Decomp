/* ptr_10006c40 - 0x10006c40 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall ptr_10006c40(undefined4 param_1,undefined1 *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint unaff_EBX;
  byte *unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  int *in_stack_00000010;
  undefined1 *in_stack_00000014;
  byte *pbStack00000018;
  undefined1 *puStack0000001c;
  uint in_stack_00000024;
  uint in_stack_00000028;
  int in_stack_0000002c;
  
code_r0x10006c40:
  if ((uint)((int)param_2 - *(int *)(unaff_ESI + 0x28)) < (uint)in_stack_00000010[3]) {
    iVar5 = (*(int *)(unaff_ESI + 0x2c) - *(int *)(unaff_ESI + 0x28)) - in_stack_00000010[3];
  }
  else {
    iVar5 = -in_stack_00000010[3];
  }
  puStack0000001c = param_2 + iVar5;
  iVar5 = in_stack_00000010[1];
  while (iVar5 != 0) {
    puVar7 = param_2;
    if (in_stack_00000014 == (undefined1 *)0x0) {
      if (param_2 == *(undefined1 **)(unaff_ESI + 0x2c)) {
        in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x30);
        puVar7 = *(undefined1 **)(unaff_ESI + 0x28);
        if (in_stack_00000014 != puVar7) {
          if (puVar7 < in_stack_00000014) {
            in_stack_00000014 = in_stack_00000014 + (-1 - (int)puVar7);
          }
          else {
            in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x2c) + -(int)puVar7;
          }
          param_2 = puVar7;
          if (in_stack_00000014 != (undefined1 *)0x0) goto LAB_10006d21;
        }
      }
      *(undefined1 **)(unaff_ESI + 0x34) = param_2;
      in_stack_0000002c = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
      puVar7 = *(undefined1 **)(unaff_ESI + 0x34);
      puVar3 = *(undefined1 **)(unaff_ESI + 0x30);
      if (puVar7 < puVar3) {
        in_stack_00000014 = puVar3 + (-1 - (int)puVar7);
      }
      else {
        in_stack_00000014 = (undefined1 *)(*(int *)(unaff_ESI + 0x2c) - (int)puVar7);
      }
      if ((puVar7 == *(undefined1 **)(unaff_ESI + 0x2c)) &&
         (puVar4 = *(undefined1 **)(unaff_ESI + 0x28), puVar3 != puVar4)) {
        puVar7 = puVar4;
        if (puVar4 < puVar3) {
          in_stack_00000014 = puVar3 + (-1 - (int)puVar4);
        }
        else {
          in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x2c) + -(int)puVar4;
        }
      }
      if (in_stack_00000014 == (undefined1 *)0x0) goto LAB_10006eb9;
    }
LAB_10006d21:
    *puVar7 = *puStack0000001c;
    param_2 = puVar7 + 1;
    puStack0000001c = puStack0000001c + 1;
    in_stack_00000014 = in_stack_00000014 + -1;
    in_stack_0000002c = 0;
    if (puStack0000001c == *(undefined1 **)(unaff_ESI + 0x2c)) {
      puStack0000001c = *(undefined1 **)(unaff_ESI + 0x28);
    }
    piVar1 = in_stack_00000010 + 1;
    *piVar1 = *piVar1 + -1;
    iVar5 = *piVar1;
  }
  *in_stack_00000010 = 0;
  do {
    switch(*in_stack_00000010) {
    case 0:
      if (((undefined1 *)0x101 < in_stack_00000014) && (9 < in_stack_00000028)) {
        *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
        *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
        unaff_EDI[1] = in_stack_00000028;
        unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
        *unaff_EDI = (int)unaff_EBP;
        *(undefined1 **)(unaff_ESI + 0x34) = param_2;
        in_stack_0000002c =
             FUN_10007060((uint)*(byte *)(in_stack_00000010 + 4),
                          (uint)*(byte *)((int)in_stack_00000010 + 0x11),in_stack_00000010[5],
                          in_stack_00000010[6],unaff_ESI,unaff_EDI);
        in_stack_00000028 = unaff_EDI[1];
        in_stack_00000024 = *(uint *)(unaff_ESI + 0x20);
        unaff_EBP = (byte *)*unaff_EDI;
        unaff_EBX = *(uint *)(unaff_ESI + 0x1c);
        param_2 = *(undefined1 **)(unaff_ESI + 0x34);
        if (param_2 < *(undefined1 **)(unaff_ESI + 0x30)) {
          in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x30) + (-1 - (int)param_2);
        }
        else {
          in_stack_00000014 = (undefined1 *)(*(int *)(unaff_ESI + 0x2c) - (int)param_2);
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
      for (; unaff_EBX < (uint)in_stack_00000010[3]; unaff_EBX = unaff_EBX + 8) {
        if (in_stack_00000028 == 0) goto LAB_10006e35;
        in_stack_00000028 = in_stack_00000028 - 1;
        in_stack_0000002c = 0;
        in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
        unaff_EBP = unaff_EBP + 1;
      }
      pbStack00000018 =
           (byte *)(in_stack_00000010[2] +
                   (*(uint *)(&DAT_10011500 + in_stack_00000010[3] * 4) & in_stack_00000024) * 8);
      puStack0000001c = (undefined1 *)(uint)pbStack00000018[1];
      in_stack_00000024 = in_stack_00000024 >> (pbStack00000018[1] & 0x1f);
      unaff_EBX = unaff_EBX - (int)puStack0000001c;
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
LAB_10006e81:
            *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
            *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
            unaff_EDI[1] = in_stack_00000028;
            unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
            *unaff_EDI = (int)unaff_EBP;
            *(undefined1 **)(unaff_ESI + 0x34) = param_2;
            FUN_10008290(unaff_ESI,(int)unaff_EDI,-3);
            return;
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
      uVar6 = in_stack_00000010[2];
      for (; unaff_EBX < uVar6; unaff_EBX = unaff_EBX + 8) {
        if (in_stack_00000028 == 0) goto LAB_10006e35;
        in_stack_00000028 = in_stack_00000028 - 1;
        in_stack_0000002c = 0;
        in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
        unaff_EBP = unaff_EBP + 1;
      }
      in_stack_00000010[1] =
           in_stack_00000010[1] + (*(uint *)(&DAT_10011500 + uVar6 * 4) & in_stack_00000024);
      in_stack_00000024 = in_stack_00000024 >> ((byte)uVar6 & 0x1f);
      unaff_EBX = unaff_EBX - uVar6;
      *in_stack_00000010 = 3;
      in_stack_00000010[3] = (uint)*(byte *)((int)in_stack_00000010 + 0x11);
      in_stack_00000010[2] = in_stack_00000010[6];
    case 3:
      for (; unaff_EBX < (uint)in_stack_00000010[3]; unaff_EBX = unaff_EBX + 8) {
        if (in_stack_00000028 == 0) goto LAB_10006e35;
        in_stack_00000028 = in_stack_00000028 - 1;
        in_stack_0000002c = 0;
        in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
        unaff_EBP = unaff_EBP + 1;
      }
      pbStack00000018 =
           (byte *)(in_stack_00000010[2] +
                   (*(uint *)(&DAT_10011500 + in_stack_00000010[3] * 4) & in_stack_00000024) * 8);
      puStack0000001c = (undefined1 *)(uint)pbStack00000018[1];
      in_stack_00000024 = in_stack_00000024 >> (pbStack00000018[1] & 0x1f);
      unaff_EBX = unaff_EBX - (int)puStack0000001c;
      bVar2 = *pbStack00000018;
      uVar6 = (uint)bVar2;
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          *in_stack_00000010 = 9;
          unaff_EDI[6] = (int)s_invalid_distance_code_10010260;
          goto LAB_10006e81;
        }
        goto LAB_10006a7c;
      }
      in_stack_00000010[2] = bVar2 & 0xf;
      in_stack_00000010[3] = *(int *)(pbStack00000018 + 4);
      *in_stack_00000010 = 4;
      break;
    case 4:
      goto ptr_10006bd5;
    case 5:
      goto code_r0x10006c40;
    case 6:
      puVar7 = param_2;
      if (in_stack_00000014 == (undefined1 *)0x0) {
        if (param_2 == *(undefined1 **)(unaff_ESI + 0x2c)) {
          in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x30);
          puVar7 = *(undefined1 **)(unaff_ESI + 0x28);
          if (in_stack_00000014 != puVar7) {
            if (puVar7 < in_stack_00000014) {
              in_stack_00000014 = in_stack_00000014 + (-1 - (int)puVar7);
            }
            else {
              in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x2c) + -(int)puVar7;
            }
            param_2 = puVar7;
            if (in_stack_00000014 != (undefined1 *)0x0) goto LAB_10006e04;
          }
        }
        *(undefined1 **)(unaff_ESI + 0x34) = param_2;
        in_stack_0000002c = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
        puVar7 = *(undefined1 **)(unaff_ESI + 0x34);
        puVar3 = *(undefined1 **)(unaff_ESI + 0x30);
        if (puVar7 < puVar3) {
          in_stack_00000014 = puVar3 + (-1 - (int)puVar7);
        }
        else {
          in_stack_00000014 = (undefined1 *)(*(int *)(unaff_ESI + 0x2c) - (int)puVar7);
        }
        if ((puVar7 == *(undefined1 **)(unaff_ESI + 0x2c)) &&
           (puVar4 = *(undefined1 **)(unaff_ESI + 0x28), puVar3 != puVar4)) {
          puVar7 = puVar4;
          if (puVar4 < puVar3) {
            in_stack_00000014 = puVar3 + (-1 - (int)puVar4);
          }
          else {
            in_stack_00000014 = *(undefined1 **)(unaff_ESI + 0x2c) + -(int)puVar4;
          }
        }
        if (in_stack_00000014 == (undefined1 *)0x0) {
LAB_10006eb9:
          *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
          *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
          unaff_EDI[1] = in_stack_00000028;
          unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
          *unaff_EDI = (int)unaff_EBP;
          *(undefined1 **)(unaff_ESI + 0x34) = puVar7;
          FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
          return;
        }
      }
LAB_10006e04:
      *puVar7 = (char)in_stack_00000010[2];
      param_2 = puVar7 + 1;
      in_stack_00000014 = in_stack_00000014 + -1;
      in_stack_0000002c = 0;
      *in_stack_00000010 = 0;
      break;
    case 7:
      if (7 < unaff_EBX) {
        unaff_EBX = unaff_EBX - 8;
        in_stack_00000028 = in_stack_00000028 + 1;
        unaff_EBP = unaff_EBP + -1;
      }
      *(undefined1 **)(unaff_ESI + 0x34) = param_2;
      iVar5 = FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
      param_2 = *(undefined1 **)(unaff_ESI + 0x34);
      if (*(undefined1 **)(unaff_ESI + 0x30) != param_2) {
        *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
        *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
        unaff_EDI[1] = in_stack_00000028;
        unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
        *unaff_EDI = (int)unaff_EBP;
        *(undefined1 **)(unaff_ESI + 0x34) = param_2;
        FUN_10008290(unaff_ESI,(int)unaff_EDI,iVar5);
        return;
      }
      *in_stack_00000010 = 8;
    case 8:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = in_stack_00000028;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(undefined1 **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,1);
      return;
    case 9:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = in_stack_00000028;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(undefined1 **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,-3);
      return;
    default:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = in_stack_00000028;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(undefined1 **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,-2);
      return;
    }
  } while( true );
ptr_10006bd5:
  uVar6 = in_stack_00000010[2];
  for (; unaff_EBX < uVar6; unaff_EBX = unaff_EBX + 8) {
    if (in_stack_00000028 == 0) {
LAB_10006e35:
      *(uint *)(unaff_ESI + 0x20) = in_stack_00000024;
      *(uint *)(unaff_ESI + 0x1c) = unaff_EBX;
      unaff_EDI[1] = 0;
      unaff_EDI[2] = (int)(unaff_EBP + (unaff_EDI[2] - *unaff_EDI));
      *unaff_EDI = (int)unaff_EBP;
      *(undefined1 **)(unaff_ESI + 0x34) = param_2;
      FUN_10008290(unaff_ESI,(int)unaff_EDI,in_stack_0000002c);
      return;
    }
    in_stack_00000028 = in_stack_00000028 - 1;
    in_stack_0000002c = 0;
    in_stack_00000024 = in_stack_00000024 | (uint)*unaff_EBP << ((byte)unaff_EBX & 0x1f);
    unaff_EBP = unaff_EBP + 1;
  }
  in_stack_00000010[3] =
       in_stack_00000010[3] + (*(uint *)(&DAT_10011500 + uVar6 * 4) & in_stack_00000024);
  in_stack_00000024 = in_stack_00000024 >> ((byte)uVar6 & 0x1f);
  unaff_EBX = unaff_EBX - uVar6;
  *in_stack_00000010 = 5;
  goto code_r0x10006c40;
}


