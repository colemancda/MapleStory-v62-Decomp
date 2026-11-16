/* ptr_10007607 - 0x10007607 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int ptr_10007607(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  int iVar4;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  int in_stack_00000018;
  
code_r0x10007607:
  if (unaff_ESI[1] == 0) {
    return unaff_EDI;
  }
  unaff_ESI[1] = unaff_ESI[1] + -1;
  unaff_ESI[2] = unaff_ESI[2] + 1;
  in_EAX[1] = (uint)*(byte *)*unaff_ESI;
  puVar2 = (undefined4 *)unaff_ESI[7];
  uVar3 = puVar2[1];
  *unaff_ESI = *unaff_ESI + 1;
  unaff_EDI = unaff_EBX;
  if (((byte)uVar3 & 0xf) == 8) {
    if (((uint)puVar2[1] >> 4) + 8 <= (uint)puVar2[4]) {
      *puVar2 = 1;
      iVar4 = unaff_EBX;
      goto switchD_10007600_caseD_1;
    }
    *puVar2 = 0xd;
    unaff_ESI[6] = (int)s_invalid_window_size_100102d4;
    *(undefined4 *)(unaff_ESI[7] + 4) = unaff_EBP;
  }
  else {
    *puVar2 = 0xd;
    unaff_ESI[6] = (int)s_unknown_compression_method_100102e8;
    *(undefined4 *)(unaff_ESI[7] + 4) = unaff_EBP;
  }
  do {
    in_EAX = (undefined4 *)unaff_ESI[7];
    iVar4 = unaff_EBX;
    switch(*in_EAX) {
    case 0:
      goto code_r0x10007607;
    case 1:
switchD_10007600_caseD_1:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      bVar1 = *(byte *)*unaff_ESI;
      *unaff_ESI = (int)((byte *)*unaff_ESI + 1);
      puVar2 = (undefined4 *)unaff_ESI[7];
      unaff_EBX = in_stack_00000018;
      unaff_EDI = iVar4;
      if ((puVar2[1] * 0x100 + (uint)bVar1) % 0x1f != 0) {
        *puVar2 = 0xd;
        unaff_EBP = 5;
        unaff_ESI[6] = (int)s_incorrect_header_check_100102bc;
        *(undefined4 *)(unaff_ESI[7] + 4) = 5;
        break;
      }
      if ((bVar1 & 0x20) == 0) {
        *puVar2 = 7;
        unaff_EBP = 5;
        break;
      }
      *(undefined4 *)unaff_ESI[7] = 2;
      unaff_EBP = 5;
    case 2:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[2] = unaff_ESI[2] + 1;
      unaff_ESI[1] = unaff_ESI[1] + -1;
      *(uint *)(unaff_ESI[7] + 8) = (uint)*(byte *)*unaff_ESI << 0x18;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 3;
      unaff_EDI = unaff_EBX;
switchD_10007600_caseD_3:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x10000
      ;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 4;
      unaff_EDI = unaff_EBX;
switchD_10007600_caseD_4:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x100;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = unaff_EBP;
      unaff_EDI = unaff_EBX;
switchD_10007600_caseD_5:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      unaff_ESI[0xc] = ((undefined4 *)unaff_ESI[7])[2];
      *(undefined4 *)unaff_ESI[7] = 6;
      return 2;
    case 3:
      goto switchD_10007600_caseD_3;
    case 4:
      goto switchD_10007600_caseD_4;
    case 5:
      goto switchD_10007600_caseD_5;
    case 6:
      *(undefined4 *)unaff_ESI[7] = 0xd;
      unaff_ESI[6] = (int)s_need_dictionary_10010294;
      *(undefined4 *)(unaff_ESI[7] + 4) = 0;
      return -2;
    case 7:
      iVar4 = FUN_10005af0((uint *)in_EAX[5],unaff_ESI,unaff_EDI);
      if (iVar4 == -3) {
        *(undefined4 *)unaff_ESI[7] = 0xd;
        *(undefined4 *)(unaff_ESI[7] + 4) = 0;
        unaff_EDI = -3;
      }
      else {
        if (iVar4 == 0) {
          iVar4 = unaff_EBX;
        }
        if (iVar4 != 1) {
          return iVar4;
        }
        FUN_100059d0(*(int **)(unaff_ESI[7] + 0x14),(int)unaff_ESI,(int *)(unaff_ESI[7] + 4));
        puVar2 = (undefined4 *)unaff_ESI[7];
        if (puVar2[3] == 0) {
          *puVar2 = 8;
          unaff_EDI = unaff_EBX;
          goto switchD_10007600_caseD_8;
        }
        *puVar2 = 0xc;
        unaff_EDI = unaff_EBX;
      }
      break;
    case 8:
switchD_10007600_caseD_8:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = (uint)*(byte *)*unaff_ESI << 0x18;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 9;
      unaff_EDI = unaff_EBX;
switchD_10007600_caseD_9:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x10000
      ;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 10;
      unaff_EDI = unaff_EBX;
switchD_10007600_caseD_a:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x100;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 0xb;
      unaff_EDI = unaff_EBX;
switchD_10007600_caseD_b:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI;
      *unaff_ESI = *unaff_ESI + 1;
      puVar2 = (undefined4 *)unaff_ESI[7];
      if (puVar2[1] == puVar2[2]) {
        *(undefined4 *)unaff_ESI[7] = 0xc;
switchD_10007600_caseD_c:
        return 1;
      }
      *puVar2 = 0xd;
      unaff_ESI[6] = (int)s_incorrect_data_check_100102a4;
      *(undefined4 *)(unaff_ESI[7] + 4) = unaff_EBP;
      unaff_EDI = unaff_EBX;
      break;
    case 9:
      goto switchD_10007600_caseD_9;
    case 10:
      goto switchD_10007600_caseD_a;
    case 0xb:
      goto switchD_10007600_caseD_b;
    case 0xc:
      goto switchD_10007600_caseD_c;
    case 0xd:
      return -3;
    default:
      return -2;
    }
  } while( true );
}


