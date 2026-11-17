/* FUN_0074b391 - 0x0074b391 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0074b391(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0044dddc(param_2,0);
  switch(uVar1) {
  case 0x1e:
    uVar1 = 0x262;
    break;
  case 0x1f:
    uVar1 = 0x263;
    break;
  case 0x20:
    uVar1 = 0x264;
    break;
  case 0x21:
    uVar1 = 0x265;
    break;
  default:
    *param_1 = 0;
    return param_1;
  case 0x25:
    uVar1 = 0x266;
    break;
  case 0x26:
    uVar1 = 0x267;
    break;
  case 0x28:
    uVar1 = 0x268;
    break;
  case 0x29:
    uVar1 = 0x269;
    break;
  case 0x2a:
    uVar1 = 0x26a;
    break;
  case 0x2b:
    uVar1 = 0x26b;
    break;
  case 0x2c:
    uVar1 = 0x26c;
    break;
  case 0x2d:
    uVar1 = 0x26d;
    break;
  case 0x2e:
    uVar1 = 0x26e;
    break;
  case 0x2f:
    uVar1 = 0x26f;
    break;
  case 0x30:
    uVar1 = 0x270;
    break;
  case 0x31:
    uVar1 = 0x271;
  }
  FUN_00679d22(param_1,uVar1);
  return param_1;
}


