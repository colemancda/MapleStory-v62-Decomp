/* ptr_100077f3 - 0x100077f3 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


int ptr_100077f3(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  undefined4 unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  int in_stack_00000018;
  
  do {
    if (unaff_ESI[1] == 0) {
      return unaff_EDI;
    }
    unaff_ESI[1] = unaff_ESI[1] + -1;
    unaff_ESI[2] = unaff_ESI[2] + 1;
    *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI;
    *unaff_ESI = *unaff_ESI + 1;
    puVar3 = (undefined4 *)unaff_ESI[7];
    if (puVar3[1] == puVar3[2]) {
      *(undefined4 *)unaff_ESI[7] = 0xc;
switchD_10007600_caseD_c:
      return 1;
    }
    *puVar3 = 0xd;
    unaff_ESI[6] = (int)s_incorrect_data_check_100102a4;
    *(undefined4 *)(unaff_ESI[7] + 4) = unaff_EBP;
    iVar5 = unaff_EBX;
    unaff_EDI = unaff_EBX;
LAB_100075f2:
    unaff_EBX = iVar5;
    puVar3 = (undefined4 *)unaff_ESI[7];
    iVar5 = unaff_EBX;
    switch(*puVar3) {
    case 0:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      puVar3[1] = (uint)*(byte *)*unaff_ESI;
      puVar3 = (undefined4 *)unaff_ESI[7];
      uVar2 = puVar3[1];
      *unaff_ESI = *unaff_ESI + 1;
      if (((byte)uVar2 & 0xf) != 8) {
        *puVar3 = 0xd;
        unaff_ESI[6] = (int)s_unknown_compression_method_100102e8;
        *(undefined4 *)(unaff_ESI[7] + 4) = unaff_EBP;
        unaff_EDI = unaff_EBX;
        goto LAB_100075f2;
      }
      if ((uint)puVar3[4] < ((uint)puVar3[1] >> 4) + 8) {
        *puVar3 = 0xd;
        unaff_ESI[6] = (int)s_invalid_window_size_100102d4;
        *(undefined4 *)(unaff_ESI[7] + 4) = unaff_EBP;
        unaff_EDI = unaff_EBX;
        goto LAB_100075f2;
      }
      *puVar3 = 1;
      unaff_EDI = unaff_EBX;
    case 1:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      bVar1 = *(byte *)*unaff_ESI;
      *unaff_ESI = (int)((byte *)*unaff_ESI + 1);
      puVar3 = (undefined4 *)unaff_ESI[7];
      if ((puVar3[1] * 0x100 + (uint)bVar1) % 0x1f == 0) {
        if ((bVar1 & 0x20) != 0) {
          *(undefined4 *)unaff_ESI[7] = 2;
          unaff_EBP = 5;
          iVar5 = in_stack_00000018;
          unaff_EDI = unaff_EBX;
switchD_10007600_caseD_2:
          if (unaff_ESI[1] == 0) {
            return unaff_EDI;
          }
          unaff_ESI[2] = unaff_ESI[2] + 1;
          unaff_ESI[1] = unaff_ESI[1] + -1;
          *(uint *)(unaff_ESI[7] + 8) = (uint)*(byte *)*unaff_ESI << 0x18;
          *unaff_ESI = *unaff_ESI + 1;
          *(undefined4 *)unaff_ESI[7] = 3;
          unaff_EDI = iVar5;
switchD_10007600_caseD_3:
          if (unaff_ESI[1] == 0) {
            return unaff_EDI;
          }
          unaff_ESI[1] = unaff_ESI[1] + -1;
          unaff_ESI[2] = unaff_ESI[2] + 1;
          *(uint *)(unaff_ESI[7] + 8) =
               *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x10000;
          *unaff_ESI = *unaff_ESI + 1;
          *(undefined4 *)unaff_ESI[7] = 4;
          unaff_EDI = iVar5;
switchD_10007600_caseD_4:
          if (unaff_ESI[1] == 0) {
            return unaff_EDI;
          }
          unaff_ESI[1] = unaff_ESI[1] + -1;
          unaff_ESI[2] = unaff_ESI[2] + 1;
          *(uint *)(unaff_ESI[7] + 8) =
               *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x100;
          *unaff_ESI = *unaff_ESI + 1;
          *(undefined4 *)unaff_ESI[7] = unaff_EBP;
          unaff_EDI = iVar5;
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
        }
        *puVar3 = 7;
        unaff_EBP = 5;
        iVar5 = in_stack_00000018;
        unaff_EDI = unaff_EBX;
      }
      else {
        *puVar3 = 0xd;
        unaff_EBP = 5;
        unaff_ESI[6] = (int)s_incorrect_header_check_100102bc;
        *(undefined4 *)(unaff_ESI[7] + 4) = 5;
        iVar5 = in_stack_00000018;
        unaff_EDI = unaff_EBX;
      }
      goto LAB_100075f2;
    case 2:
      goto switchD_10007600_caseD_2;
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
      iVar4 = FUN_10005af0((uint *)puVar3[5],unaff_ESI,unaff_EDI);
      if (iVar4 == -3) goto code_r0x100076ff;
      if (iVar4 == 0) {
        iVar4 = unaff_EBX;
      }
      if (iVar4 != 1) {
        return iVar4;
      }
      FUN_100059d0(*(int **)(unaff_ESI[7] + 0x14),(int)unaff_ESI,(int *)(unaff_ESI[7] + 4));
      puVar3 = (undefined4 *)unaff_ESI[7];
      if (puVar3[3] == 0) {
        *puVar3 = 8;
        unaff_EDI = unaff_EBX;
        goto ptr_10007757;
      }
      *puVar3 = 0xc;
      unaff_EDI = unaff_EBX;
      goto LAB_100075f2;
    case 8:
ptr_10007757:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = (uint)*(byte *)*unaff_ESI << 0x18;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 9;
      unaff_EDI = unaff_EBX;
ptr_10007785:
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
ptr_100077bc:
      if (unaff_ESI[1] == 0) {
        return unaff_EDI;
      }
      unaff_ESI[1] = unaff_ESI[1] + -1;
      unaff_ESI[2] = unaff_ESI[2] + 1;
      *(uint *)(unaff_ESI[7] + 8) = *(int *)(unaff_ESI[7] + 8) + (uint)*(byte *)*unaff_ESI * 0x100;
      *unaff_ESI = *unaff_ESI + 1;
      *(undefined4 *)unaff_ESI[7] = 0xb;
      unaff_EDI = unaff_EBX;
      break;
    case 9:
      goto ptr_10007785;
    case 10:
      goto ptr_100077bc;
    case 0xb:
      break;
    case 0xc:
      goto switchD_10007600_caseD_c;
    case 0xd:
      return -3;
    default:
      return -2;
    }
  } while( true );
code_r0x100076ff:
  *(undefined4 *)unaff_ESI[7] = 0xd;
  *(undefined4 *)(unaff_ESI[7] + 4) = 0;
  unaff_EDI = -3;
  goto LAB_100075f2;
}


