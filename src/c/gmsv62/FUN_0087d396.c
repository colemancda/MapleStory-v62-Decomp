/* FUN_0087d396 - 0x0087d396 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte * FUN_0087d396(byte *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  size_t sVar6;
  
  if (param_3 != 0) {
    if (DAT_0098201c == 0) {
      param_1 = (byte *)_strncat((char *)param_1,(char *)param_2,param_3);
    }
    else {
      FUN_0087d9ec(0x19);
      pbVar5 = param_1;
      do {
        pbVar4 = pbVar5;
        pbVar5 = pbVar4 + 1;
      } while (*pbVar4 != 0);
      iVar3 = FUN_00885d3b(param_1,pbVar4 + (-1 - (int)param_1));
      if (iVar3 == 1) {
        pbVar4 = pbVar4 + -1;
      }
      do {
        sVar6 = param_3 - 1;
        bVar1 = *param_2;
        bVar2 = *(byte *)((int)&DAT_00982120 + bVar1 + 1);
        *pbVar4 = bVar1;
        if ((bVar2 & 4) == 0) {
          pbVar5 = pbVar4 + 1;
          param_2 = param_2 + 1;
          param_3 = sVar6;
          if (bVar1 == 0) break;
        }
        else {
          pbVar5 = pbVar4 + 1;
          param_3 = param_3 - 2;
          if (sVar6 == 0) {
            *pbVar4 = 0;
            break;
          }
          bVar1 = param_2[1];
          *pbVar5 = bVar1;
          pbVar5 = pbVar4 + 2;
          param_2 = param_2 + 2;
          if (bVar1 == 0) {
            *pbVar4 = 0;
            break;
          }
        }
        pbVar4 = pbVar5;
      } while (param_3 != 0);
      iVar3 = FUN_00885d3b(param_1,pbVar5 + (-1 - (int)param_1));
      if (iVar3 == 1) {
        pbVar5[-1] = 0;
      }
      else {
        *pbVar5 = 0;
      }
      FUN_0087da4d(0x19);
    }
  }
  return param_1;
}


