/* FUN_0086e010 - 0x0086e010 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0086e010(undefined4 param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  if (DAT_0097fc64 != (char *)0x0) {
    uVar3 = FUN_00875080(&DAT_0096e3c0,param_2,param_3);
    FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
  }
  switch(param_2) {
  case 0x60f:
    uVar3 = 0x3e9;
    bVar5 = *DAT_0097fc64 == '\0';
    goto LAB_0086e070;
  case 0x610:
    uVar3 = 0x3ea;
    bVar5 = *DAT_0097fc64 == '\0';
    goto LAB_0086e091;
  default:
    if (param_2 == 500) {
      uVar3 = 0x3f6;
      param_3 = 500;
    }
    else {
      uVar3 = 1000;
    }
    if (*(int *)(DAT_0097fc64 + 4) != 0) break;
    goto LAB_0086e13c;
  case 0x615:
    _DAT_0097fb44 = param_3;
    if (DAT_0097fb54 == 0) {
      DAT_0097fb54 = param_3;
    }
    else if (param_3 != DAT_0097fb54) {
      if (DAT_0097fc64 != (char *)0x0) {
        uVar3 = FUN_00875080(&DAT_0096e358,param_3,DAT_0097fb54);
        FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
      }
      DAT_0097fb24 = 2;
      uVar3 = 0x3f6;
      param_3 = 0xe6;
      if (*(int *)(DAT_0097fc64 + 4) == 0) {
        pcVar1 = DAT_0097fc64;
        pcVar1[8] = -10;
        pcVar1[9] = '\x03';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        pcVar1 = DAT_0097fc64;
        pcVar1[0xc] = -0x1a;
        pcVar1[0xd] = '\0';
        pcVar1[0xe] = '\0';
        pcVar1[0xf] = '\0';
        return 1;
      }
      break;
    }
    cVar2 = FUN_0086f5b0(&DAT_0097fa18,0x7d6,10,5,1);
    if (cVar2 != '\0') {
      return 1;
    }
    if (DAT_0097fc64 != (char *)0x0) {
      uVar3 = FUN_00875080(&DAT_0096e380);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
    }
    uVar3 = 0x3f6;
    param_3 = 0xe6;
    bVar5 = *(int *)(DAT_0097fc64 + 4) == 0;
    goto LAB_0086e091;
  case 0x618:
    if (param_3 < (uint)(DAT_0096d720 * 800)) {
      return 1;
    }
    FUN_0086ea60();
    FUN_0086eb40();
    if (DAT_0097fc64 != (char *)0x0) {
      uVar3 = FUN_00875080(&DAT_0096e3a8,param_3);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
    }
    uVar3 = 0x3e9;
    break;
  case 0x619:
    param_3 = FUN_00873e10();
    uVar3 = 0x3f9;
    break;
  case 0x62d:
    uVar3 = 0x3f3;
    goto LAB_0086e131;
  case 0x62e:
    uVar3 = 0x3f4;
    bVar5 = *(int *)(DAT_0097fc64 + 4) == 0;
    goto LAB_0086e070;
  case 0x62f:
    uVar3 = 0x3f5;
    bVar5 = *(int *)(DAT_0097fc64 + 4) == 0;
    goto LAB_0086e091;
  case 0x630:
    uVar3 = 0x3f7;
    bVar5 = *(int *)(DAT_0097fc64 + 4) == 0;
    goto LAB_0086e070;
  case 0x637:
    uVar3 = 0x3f6;
    param_3 = 0xd2;
    bVar5 = *(int *)(DAT_0097fc64 + 4) == 0;
LAB_0086e091:
    if (bVar5) {
      *(undefined4 *)(DAT_0097fc64 + 8) = uVar3;
      *(uint *)(DAT_0097fc64 + 0xc) = param_3;
      return 1;
    }
    break;
  case 0x638:
    uVar3 = 0x3f6;
    param_3 = 0xdc;
    if (*(int *)(DAT_0097fc64 + 4) == 0) {
      pcVar1 = DAT_0097fc64;
      pcVar1[8] = -10;
      pcVar1[9] = '\x03';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1 = DAT_0097fc64;
      pcVar1[0xc] = -0x24;
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      return 1;
    }
    break;
  case 0x639:
    uVar3 = 0x3f6;
    param_3 = 0xe6;
    bVar5 = *(int *)(DAT_0097fc64 + 4) == 0;
LAB_0086e070:
    if (bVar5) {
      *(undefined4 *)(DAT_0097fc64 + 8) = uVar3;
      *(uint *)(DAT_0097fc64 + 0xc) = param_3;
      return 1;
    }
    break;
  case 0x63a:
    if (DAT_0097fc64 != (char *)0x0) {
      uVar3 = FUN_00875080(&DAT_0096e394,param_3);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
    }
    uVar3 = 0x3f8;
    break;
  case 0x63c:
    uVar3 = 0x3fa;
LAB_0086e131:
    if (*(int *)(DAT_0097fc64 + 4) == 0) {
LAB_0086e13c:
      *(undefined4 *)(DAT_0097fc64 + 8) = uVar3;
      *(uint *)(DAT_0097fc64 + 0xc) = param_3;
      return 1;
    }
  }
  iVar4 = FUN_0086698a(uVar3,param_3);
  if (iVar4 != 0) {
    return 1;
  }
  if (DAT_0097fc64 != (char *)0x0) {
    uVar3 = FUN_00875080(&DAT_0096e338,uVar3,param_3);
    FUN_0086cff0(DAT_0097fc64 + 0x24,uVar3);
  }
  DAT_0097fc64[0x23] = '\x01';
  return 0;
}


