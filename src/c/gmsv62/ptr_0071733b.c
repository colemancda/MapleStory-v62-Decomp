/* ptr_0071733b - 0x0071733b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
ptr_0071733b(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iStack_8;
  
  iVar1 = DAT_00979174;
  if (param_2 != 0x201) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  if (iVar2 == 1) {
LAB_0071736e:
    param_2 = 0xb;
  }
  else if (iVar2 == 2) {
    param_2 = 5;
  }
  else if (iVar2 == 3) {
    param_2 = 4;
  }
  else if (iVar2 == 4) {
    param_2 = 7;
  }
  else {
    if (iVar2 == 5) goto LAB_0071736e;
    param_2 = 0;
  }
  if (iVar2 == 1) {
LAB_007173a2:
    iStack_8 = 0xb;
  }
  else if (iVar2 == 2) {
    iStack_8 = 5;
  }
  else if (iVar2 == 4) {
    iStack_8 = 7;
  }
  else {
    if (iVar2 == 5) goto LAB_007173a2;
    iStack_8 = 0;
  }
  iVar3 = 0xb;
  if (((iVar2 != 1) && (iVar3 = 7, iVar2 != 4)) && (iVar3 = 0xb, iVar2 != 5)) {
    iVar3 = 0;
  }
  iVar2 = (param_5 + -0x28) / 0xd;
  FUN_007176d3();
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
  }
  if (iVar2 == iVar3 + 1) {
    *(undefined4 *)(param_1 + 0x7c) = 2;
  }
  if (iVar2 == iStack_8 + 2) {
    *(undefined4 *)(param_1 + 0x7c) = 3;
  }
  if (iVar2 == param_2 + 3) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_007176ea(0x12d);
    FUN_007176ea(399);
  }
  if (*(int *)(param_1 + 0x7c) == 1) {
    if (iVar2 == 10) {
      *(undefined4 *)(param_1 + 0x7c) = 4;
LAB_00717469:
      FUN_008161f1(0);
      return;
    }
    if (iVar2 == 0xb) {
      *(undefined4 *)(param_1 + 0x7c) = 5;
      goto LAB_00717469;
    }
  }
  if ((*(int *)(param_1 + 0x7c) == 4) && (iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  FUN_008161f1(0);
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 == 1) {
    switch(iVar2) {
    case 1:
      uVar4 = 100;
      break;
    case 2:
      uVar4 = 0x67;
      break;
    case 3:
      uVar4 = 0x68;
      break;
    case 4:
      uVar4 = 0x6a;
      break;
    case 5:
      uVar4 = 0x69;
      break;
    case 6:
      uVar4 = 0x6c;
      break;
    case 7:
      uVar4 = 0x6b;
      break;
    case 8:
      uVar4 = 0x6d;
      break;
    case 9:
      uVar4 = 0x6e;
      break;
    default:
      goto switchD_007174a0_default;
    }
  }
  else if (iVar3 == 2) {
    if (iVar2 == 2) {
      FUN_0071770f(2000000,0x1ef9af);
      uVar4 = 0xcd;
LAB_00717521:
      FUN_0071772c(uVar4);
      goto switchD_007174a0_default;
    }
    if (iVar2 == 3) {
      uVar4 = 0xcb;
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 != 5) {
          if (iVar2 != 6) goto switchD_007174a0_default;
          uVar5 = 2100000;
          uVar4 = 2100000;
          goto LAB_0071758d;
        }
        FUN_0071770f(0x1f6ee0,0x1fbcff);
        uVar4 = 0xe9;
        goto LAB_00717521;
      }
      uVar4 = 0xcc;
    }
  }
  else {
    if (iVar3 == 3) {
      if (iVar2 == 3) {
        uVar5 = 0x3d189f;
        uVar4 = 4000000;
      }
      else {
        if (iVar2 != 4) {
          if (iVar2 == 5) {
            uVar4 = 0x198;
          }
          else {
            if (iVar2 != 6) goto switchD_007174a0_default;
            uVar4 = 0x19d;
          }
          goto LAB_00717640;
        }
        uVar5 = 0x3d571f;
        uVar4 = 0x3d1c88;
      }
LAB_0071758d:
      FUN_0071770f(uVar4,uVar5);
      goto switchD_007174a0_default;
    }
    if (iVar3 == 4) {
      if (iVar2 == 1) {
        uVar4 = 0x82;
      }
      else if (iVar2 == 2) {
        uVar4 = 0x83;
      }
      else if (iVar2 == 3) {
        uVar4 = 0x84;
      }
      else if (iVar2 == 4) {
        uVar4 = 0x85;
      }
      else if (iVar2 == 5) {
        uVar4 = 0x89;
      }
      else {
        if (iVar2 != 6) goto switchD_007174a0_default;
        uVar4 = 0x8a;
      }
    }
    else {
      if (iVar3 != 5) goto switchD_007174a0_default;
      switch(iVar2) {
      case 1:
        uVar4 = 0x8c;
        break;
      case 2:
        uVar4 = 0x8d;
        break;
      case 3:
        uVar4 = 0x8e;
        break;
      case 4:
        uVar4 = 0x8f;
        break;
      case 5:
        uVar4 = 0x90;
        break;
      case 6:
        uVar4 = 0x91;
        break;
      case 7:
        uVar4 = 0x92;
        break;
      case 8:
        uVar4 = 0x93;
        break;
      case 9:
        uVar4 = 0x94;
        break;
      case 10:
        uVar4 = 0x95;
        break;
      default:
        goto switchD_007174a0_default;
      }
    }
  }
LAB_00717640:
  FUN_007176ea(uVar4);
switchD_007174a0_default:
  if ((*(int *)(iVar1 + 0x6c) != 0) &&
     (*(undefined4 *)(iVar1 + 0x68) = 1, *(int *)(iVar1 + 0xdc) == 0)) {
    FUN_00718149(3);
  }
  return;
}


