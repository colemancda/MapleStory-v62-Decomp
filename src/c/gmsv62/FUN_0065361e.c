/* FUN_0065361e - 0x0065361e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0065361e(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00650dae(param_1,0x10f3da,&DAT_00979634);
  iVar2 = FUN_00650dae(param_1,0x111703,&DAT_00979630);
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = iVar1;
  if ((iVar1 == 0x1e) && (0 < iVar2)) {
    iVar3 = iVar2;
  }
  iVar2 = FUN_006509a1(iVar3);
  iVar2 = FUN_00413367(iVar2 + 0xd0,*(undefined4 *)(iVar2 + 0xd8));
  if ((((param_2 == 0x10f3de) || (param_2 == 0x10f3dd)) || (param_2 == 0x10f3dc)) ||
     (param_2 == 0x10f3db)) {
    switch(param_3) {
    case 1:
      goto LAB_006537ce;
    case 2:
      return (iVar1 * 0x18 + -0x18) / 0x1d + 6 + iVar2;
    case 3:
      return (iVar1 * 0x40 + -0x40) / 0x1d + 0x10 + iVar2;
    case 4:
      return (iVar1 * 0x78 + -0x78) / 0x1d + 0x1e + iVar2;
    case 5:
      return (iVar1 * 0xb8 + -0xb8) / 0x1d + 0x2e + iVar2;
    case 6:
      return iVar2 + 0xfa;
    case 7:
      return iVar2 + 0x10e;
    case 8:
      return iVar2 + 0x122;
    case 9:
      return iVar2 + 0x131;
    case 10:
      return iVar2 + 0x140;
    default:
      goto LAB_006537ce;
    }
  }
  if (param_3 < 0) {
    return 0;
  }
  switch(param_3) {
  case 1:
    goto LAB_006537ce;
  case 2:
    iVar1 = iVar1 * 5 + -5;
    goto LAB_006536fc;
  case 3:
    iVar1 = iVar1 * 10 + -10;
    goto LAB_006536fc;
  case 4:
    iVar1 = iVar1 * 0xf + -0xf;
    goto LAB_006536fc;
  case 5:
    iVar1 = iVar1 * 0x14 + -0x14;
LAB_006536fc:
    iVar2 = iVar1 / 0x1d + iVar2;
    break;
  case 6:
    iVar2 = iVar2 + 0x18;
    break;
  case 7:
    iVar2 = iVar2 + 0x1c;
    break;
  case 8:
    iVar2 = iVar2 + 0x20;
    break;
  case 9:
    iVar2 = iVar2 + 0x24;
    break;
  case 10:
    iVar2 = iVar2 + 0x28;
    break;
  default:
LAB_006537ce:
    return 100;
  }
  return iVar2;
LAB_006537ce:
  return iVar2;
}


