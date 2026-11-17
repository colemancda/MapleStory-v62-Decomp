/* FUN_00889394 - 0x00889394 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00889394(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_0097356c != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_00973600) || (iVar2 != DAT_00973610)) {
      if (DAT_00980938 == 0) {
        FUN_00889540(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_00889540(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_009809d8 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_009809de;
        }
        else {
          uVar4 = DAT_009809dc;
          uVar3 = DAT_009809de;
          uVar5 = 0;
        }
        FUN_00889540(1,DAT_009809d8 == 0,iVar2,DAT_009809da,uVar3,uVar4,uVar5,DAT_009809e0,
                     DAT_009809e2,DAT_009809e4,DAT_009809e6);
        if (DAT_00980984 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_0098098a;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_00980988;
          uVar3 = DAT_0098098a;
          uVar5 = 0;
        }
        FUN_00889540(0,DAT_00980984 == 0,iVar2,DAT_00980986,uVar3,uVar4,uVar5,DAT_0098098c,
                     DAT_0098098e,DAT_00980990,DAT_00980992);
      }
    }
    iVar2 = param_1[7];
    if (DAT_00973604 < DAT_00973614) {
      if ((DAT_00973604 <= iVar2) && (iVar2 <= DAT_00973614)) {
        if ((DAT_00973604 < iVar2) && (iVar2 < DAT_00973614)) {
          return true;
        }
LAB_0088950c:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_00973604) {
          return DAT_00973608 <= iVar1;
        }
        return iVar1 < DAT_00973618;
      }
    }
    else {
      if (iVar2 < DAT_00973614) {
        return true;
      }
      if (DAT_00973604 < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_00973614) || (DAT_00973604 <= iVar2)) goto LAB_0088950c;
    }
  }
  return false;
}


