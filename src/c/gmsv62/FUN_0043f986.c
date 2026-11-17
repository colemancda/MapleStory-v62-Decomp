/* FUN_0043f986 - 0x0043f986 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_0043f986(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = param_2 & 1;
  }
  iVar1 = (int)param_2 >> 1;
  if (*(int *)(param_1 + 0x468) == 0) {
    if (*(int *)(param_1 + 0x47c) == 0) {
      switch(iVar1 + -1) {
      case 0:
        return *(int *)(param_1 + 0x430) != 1;
      case 1:
        return (bool)((*(int *)(param_1 + 0x434) != 1) + '\x02');
      case 2:
        return (bool)0x23;
      case 3:
        return (bool)4;
      case 4:
        return (bool)0x21;
      case 5:
        return (bool)0x22;
      case 6:
        return (bool)0x24;
      case 7:
        return (bool)0x25;
      case 8:
        goto LAB_0043fabd;
      case 9:
        return (bool)0x27;
      default:
        return false;
      }
    }
    switch(iVar1 + -1) {
    case 0:
      return (bool)99;
    default:
      return (bool)100;
    case 2:
      return (bool)0x65;
    case 3:
      goto LAB_0043fabd;
    case 4:
      return (bool)0x66;
    case 5:
      return (bool)0x67;
    case 6:
      return (bool)0x68;
    case 7:
      return (bool)0x69;
    case 8:
LAB_0043fabd:
      return (bool)0x26;
    case 9:
      return (bool)0x6a;
    }
  }
  iVar2 = FUN_0043fb62();
  if ((iVar2 == 0) && (iVar2 = FUN_0043fb93(), iVar2 == 0)) {
    iVar2 = FUN_0043f79a();
    if (iVar2 != 0) {
      switch(iVar1) {
      case 2:
        goto LAB_0043fabd;
      case 3:
        goto LAB_0043fabd;
      case 4:
        return (bool)3;
      case 5:
        goto LAB_0043fabd;
      case 6:
        goto LAB_0043fabd;
      case 7:
        goto LAB_0043fabd;
      case 8:
        goto LAB_0043fabd;
      case 9:
        goto LAB_0043fabd;
      case 10:
        return (bool)0xc;
      }
    }
  }
  else {
    switch(iVar1) {
    case 2:
    case 4:
    case 10:
LAB_0043fabd:
      return true;
    case 3:
LAB_0043fabd:
      return (bool)2;
    case 5:
LAB_0043fabd:
      return (bool)8;
    case 6:
LAB_0043fabd:
      return (bool)7;
    case 7:
LAB_0043fabd:
      return (bool)9;
    case 8:
LAB_0043fabd:
      return (bool)10;
    case 9:
LAB_0043fabd:
      return (bool)0xb;
    }
  }
  return false;
}


