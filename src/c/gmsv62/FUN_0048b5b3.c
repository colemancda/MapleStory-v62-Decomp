/* FUN_0048b5b3 - 0x0048b5b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0048b5b3(int param_1)

{
  int iVar1;
  int iStack_c;
  
  switch(param_1 / 10000) {
  case 500:
    iStack_c = 8;
    break;
  case 0x1f5:
    iStack_c = 9;
    break;
  case 0x1f6:
    iStack_c = 10;
    break;
  case 0x1f7:
    iStack_c = 0xb;
    break;
  case 0x1f8:
    iStack_c = 0x15;
    break;
  case 0x1f9:
    param_1 = param_1 % 10;
    if (param_1 == 0) {
      return 0x16;
    }
    if ((0 < param_1) && (param_1 < 5)) {
      return 0x17;
    }
  default:
switchD_0048b5d4_caseD_1ff:
    iStack_c = 0;
    break;
  case 0x1fa:
    param_1 = param_1 % 10;
    if (param_1 == 0) {
      return 0x18;
    }
    if (param_1 == 1) {
      return 0x19;
    }
    if (param_1 == 2) {
      return 0x1a;
    }
    goto switchD_0048b5d4_caseD_1ff;
  case 0x1fb:
    iVar1 = (param_1 % 10000) / 1000;
    if (iVar1 == 1) {
      return 0xc;
    }
    if (iVar1 == 2) {
      return 0xd;
    }
    if (iVar1 == 5) {
      param_1 = param_1 % 10;
      if (param_1 == 0) {
        return 0x2d;
      }
      if (param_1 == 1) {
        return 0x2e;
      }
      if (param_1 == 2) {
        return 0x2f;
      }
      if (param_1 == 3) {
        return 0x30;
      }
      if (param_1 == 4) {
        return 0x31;
      }
      if (param_1 == 5) {
        return 0x32;
      }
    }
    else if (iVar1 != 6) goto switchD_0048b5d4_caseD_1ff;
    iStack_c = 0xe;
    break;
  case 0x1fc:
    iStack_c = 0x11;
    break;
  case 0x1fd:
    iStack_c = 0x14;
    break;
  case 0x1fe:
    iStack_c = 0x13;
    break;
  case 0x200:
    iStack_c = 0xf;
    break;
  case 0x201:
    iStack_c = 7;
    break;
  case 0x202:
    iStack_c = 4;
    break;
  case 0x203:
    iVar1 = param_1 / 1000;
    if ((iVar1 != 0x141e) && (iVar1 != 0x141f)) {
      if (iVar1 == 0x1420) {
        return (-(uint)(param_1 / 100 != 0xc940) & 0xfffffffe) + 2;
      }
      if (iVar1 == 0x1421) {
        return 3;
      }
      if (iVar1 != 0x1422) goto switchD_0048b5d4_caseD_1ff;
    }
    iStack_c = 1;
    break;
  case 0x204:
    iStack_c = 6;
    break;
  case 0x205:
    iStack_c = (-(uint)(param_1 % 10000 != 0) & 0xfffffff0) + 0x10;
    break;
  case 0x206:
    iStack_c = 5;
    break;
  case 0x207:
    iStack_c = 0x1b;
    break;
  case 0x208:
    iStack_c = 0x12;
    break;
  case 0x20a:
    iStack_c = 0x26;
    break;
  case 0x20b:
    iStack_c = 0x1c;
    break;
  case 0x20c:
    iStack_c = 0x1d;
    break;
  case 0x20d:
    iStack_c = 0x23 - (uint)(param_1 % 0x501fb8 != 100);
    break;
  case 0x210:
    if (param_1 / 1000 == 0x14a0) {
      return 0x20;
    }
    if (param_1 / 1000 == 0x14a1) {
      return 0x21;
    }
    goto switchD_0048b5d4_caseD_1ff;
  case 0x212:
    iStack_c = 0x27;
    break;
  case 0x215:
    iStack_c = 0x1e;
    break;
  case 0x219:
    iStack_c = 0x1f;
    break;
  case 0x21a:
    iStack_c = 0x28;
    break;
  case 0x21b:
    iStack_c = 0x29;
    break;
  case 0x21c:
    if (param_1 / 1000 == 0x1518) {
      return 0x33;
    }
    if (param_1 / 1000 == 0x1519) {
      return 0x34;
    }
  case 0x21e:
    if (param_1 / 1000 == 0x152c) {
      iStack_c = 0x35;
    }
    else {
switchD_0048b5d4_caseD_222:
      iStack_c = 0x38;
    }
    break;
  case 0x221:
    iStack_c = 0x24;
    break;
  case 0x222:
    goto switchD_0048b5d4_caseD_222;
  case 0x223:
    iStack_c = 0x25;
    break;
  case 0x225:
    iStack_c = 0x39;
  }
  return iStack_c;
}


