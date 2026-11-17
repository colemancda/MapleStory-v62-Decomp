/* FUN_0044da62 - 0x0044da62 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0044da62(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 2;
  if (param_1 / 1000000 == 1) {
    iVar1 = (param_1 / 1000) % 10;
  }
  if (((param_2 != 2) && (iVar1 != 2)) && (param_2 != iVar1)) {
    return 0;
  }
  iVar1 = param_1 / 10000;
  if (0x77 < iVar1) {
    if (iVar1 == 0xb4) {
      if (param_1 != 0x1b7f74) {
        *param_3 = 0xe;
        if (param_4 != 0) {
          param_3[1] = 0x1e;
          param_3[2] = 0x26;
          return 3;
        }
        return 1;
      }
    }
    else if (iVar1 == 0xb5) {
      switch(param_1) {
      case 0x1ba620:
        *param_3 = 0x17;
        if (param_4 != 0) {
          param_3[1] = 0x22;
          param_3[2] = 0x2a;
          return 3;
        }
        return 1;
      case 0x1ba621:
        *param_3 = 0x16;
        if (param_4 != 0) {
          param_3[1] = 0x21;
          param_3[2] = 0x29;
          return 3;
        }
        return 1;
      case 0x1ba622:
        *param_3 = 0x18;
        return 1;
      case 0x1ba623:
        *param_3 = 0x19;
        return 1;
      case 0x1ba624:
        *param_3 = 0x1a;
        if (param_4 != 0) {
          param_3[1] = 0x23;
          param_3[2] = 0x2b;
          return 3;
        }
        return 1;
      case 0x1ba625:
        *param_3 = 0x1b;
        if (param_4 != 0) {
          param_3[1] = 0x24;
          param_3[2] = 0x2c;
          return 3;
        }
        return 1;
      case 0x1ba626:
        *param_3 = 0x1c;
        if (param_4 != 0) {
          param_3[1] = 0x25;
          param_3[2] = 0x2d;
          return 3;
        }
        return 1;
      case 0x1ba627:
        *param_3 = 0x2e;
        if (param_4 != 0) {
          param_3[1] = 0x2f;
          param_3[3] = 0x30;
          return 3;
        }
        return 1;
      }
    }
    else if (iVar1 != 0xb6) {
      if (iVar1 == 0xb7) {
        *param_3 = 0x1d;
        if (param_4 != 0) {
          param_3[1] = 0x20;
          param_3[2] = 0x28;
          return 3;
        }
        return 1;
      }
      if (iVar1 == 0xbe) {
        *param_3 = 0x12;
        return 1;
      }
      if (iVar1 == 0xbf) {
        *param_3 = 0x13;
        return 1;
      }
      if (iVar1 == 0xc0) {
        *param_3 = 0x14;
        return 1;
      }
      goto switchD_0044dacc_default;
    }
    *param_3 = 0x15;
    if (param_4 != 0) {
      param_3[1] = 0x1f;
      param_3[2] = 0x27;
      return 3;
    }
    return 1;
  }
  if (iVar1 != 0x77) {
    switch(iVar1) {
    case 100:
      *param_3 = 1;
      return 1;
    case 0x65:
      *param_3 = 2;
      return 1;
    case 0x66:
      *param_3 = 3;
      return 1;
    case 0x67:
      *param_3 = 4;
      return 1;
    case 0x68:
    case 0x69:
      *param_3 = 5;
      return 1;
    case 0x6a:
      *param_3 = 6;
      return 1;
    case 0x6b:
      *param_3 = 7;
      return 1;
    case 0x6c:
      *param_3 = 8;
      return 1;
    case 0x6d:
      break;
    case 0x6e:
      *param_3 = 9;
      return 1;
    case 0x6f:
      *param_3 = 0xc;
      if (param_4 != 0) {
        param_3[1] = 0xd;
        param_3[2] = 0xf;
        param_3[3] = 0x10;
        return 4;
      }
      return 1;
    case 0x70:
      *param_3 = 0x11;
      return 1;
    default:
switchD_0044dacc_default:
      iVar1 = iVar1 / 10;
      if (((iVar1 != 0xd) && (iVar1 != 0xe)) && ((iVar1 != 0x10 && (iVar1 != 0x11)))) {
        return 0;
      }
      *param_3 = 0xb;
      return 1;
    }
  }
  *param_3 = 10;
  return 1;
}


