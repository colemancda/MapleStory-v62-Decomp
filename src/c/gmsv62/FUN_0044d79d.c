/* FUN_0044d79d - 0x0044d79d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_0044d79d(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 / 1000000 == 1) {
    iVar1 = (param_1 / 1000) % 10;
  }
  else {
    iVar1 = 2;
  }
  if (((param_3 != 2) && (iVar1 != 2)) && (param_3 != iVar1)) {
    return false;
  }
  iVar1 = param_1 / 10000;
  if (iVar1 < 0x78) {
    if (iVar1 == 0x77) {
switchD_0044d804_caseD_6d:
      return param_2 == 10;
    }
    switch(iVar1) {
    case 100:
      return param_2 == 1;
    case 0x65:
      return param_2 == 2;
    case 0x66:
      return param_2 == 3;
    case 0x67:
      return param_2 == 4;
    case 0x68:
    case 0x69:
      return param_2 == 5;
    case 0x6a:
      return param_2 == 6;
    case 0x6b:
      return param_2 == 7;
    case 0x6c:
      return param_2 == 8;
    case 0x6d:
      goto switchD_0044d804_caseD_6d;
    case 0x6e:
      return param_2 == 9;
    case 0x6f:
      if (param_2 == 0xc) {
        return true;
      }
      if (param_2 == 0xd) {
        return true;
      }
      if (param_2 == 0xf) {
        return true;
      }
      bVar2 = param_2 == 0x10;
      break;
    case 0x70:
      return param_2 == 0x11;
    default:
switchD_0044d804_default:
      iVar1 = iVar1 / 10;
      if (((iVar1 != 0xd) && (iVar1 != 0xe)) && ((iVar1 != 0x10 && (iVar1 != 0x11)))) {
        return false;
      }
      return param_2 == 0xb;
    }
  }
  else if (iVar1 == 0xb4) {
    if (param_1 == 0x1b7f74) {
LAB_0044d9e0:
      if (param_2 == 0x15) {
        return true;
      }
      if (param_2 == 0x1f) {
        return true;
      }
      bVar2 = param_2 == 0x27;
    }
    else {
      if (param_2 == 0xe) {
        return true;
      }
      if (param_2 == 0x1e) {
        return true;
      }
      bVar2 = param_2 == 0x26;
    }
  }
  else if (iVar1 == 0xb5) {
    switch(param_1) {
    case 0x1ba620:
      if (param_2 == 0x17) {
        return true;
      }
      if (param_2 == 0x22) {
        return true;
      }
      bVar2 = param_2 == 0x2a;
      break;
    case 0x1ba621:
      if (param_2 == 0x16) {
        return true;
      }
      if (param_2 == 0x21) {
        return true;
      }
      bVar2 = param_2 == 0x29;
      break;
    case 0x1ba622:
      return param_2 == 0x18;
    case 0x1ba623:
      return param_2 == 0x19;
    case 0x1ba624:
      if (param_2 == 0x1a) {
        return true;
      }
      if (param_2 == 0x23) {
        return true;
      }
      bVar2 = param_2 == 0x2b;
      break;
    case 0x1ba625:
      if (param_2 == 0x1b) {
        return true;
      }
      if (param_2 == 0x24) {
        return true;
      }
      bVar2 = param_2 == 0x2c;
      break;
    case 0x1ba626:
      if (param_2 == 0x1c) {
        return true;
      }
      if (param_2 == 0x25) {
        return true;
      }
      bVar2 = param_2 == 0x2d;
      break;
    case 0x1ba627:
      if (param_2 == 0x2e) {
        return true;
      }
      if (param_2 == 0x2f) {
        return true;
      }
      bVar2 = param_2 == 0x30;
      break;
    default:
      goto LAB_0044da0a;
    }
  }
  else {
    if (iVar1 == 0xb6) goto LAB_0044d9e0;
    if (iVar1 != 0xb7) {
      if (iVar1 == 0xbe) {
        return param_2 == 0x12;
      }
      if (iVar1 == 0xbf) {
        return param_2 == 0x13;
      }
      if (iVar1 == 0xc0) {
        return param_2 == 0x14;
      }
      goto switchD_0044d804_default;
    }
    if (param_2 == 0x1d) {
      return true;
    }
    if (param_2 == 0x20) {
      return true;
    }
    bVar2 = param_2 == 0x28;
  }
  if (bVar2) {
    return true;
  }
LAB_0044da0a:
  return false;
}


