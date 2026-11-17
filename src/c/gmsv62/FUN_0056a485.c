/* FUN_0056a485 - 0x0056a485 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056a485(void)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  int unaff_EBP;
  byte *pbVar4;
  byte *pbVar5;
  
  FUN_00879bb8();
  FUN_0087a1b0();
  *(undefined1 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x23) = 0;
  *(undefined4 *)(unaff_EBP + -0x1f) = 0;
  *(undefined4 *)(unaff_EBP + -0x1b) = 0;
  *(undefined2 *)(unaff_EBP + -0x17) = 0;
  *(undefined1 *)(unaff_EBP + -0x15) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0x2800;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  GetAdaptersInfo(unaff_EBP + -0x2e34,unaff_EBP + -0x28);
  piVar2 = (int *)(unaff_EBP + -0x2e34);
  do {
    if (piVar2[0x68] == 6) {
      iVar1 = piVar2[0x65];
      pbVar5 = (byte *)(piVar2 + 0x65);
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      if (((((char)iVar1 == 'D') && (*(char *)((int)piVar2 + 0x195) == 'E')) &&
          (*(char *)((int)piVar2 + 0x196) == 'S')) &&
         (((*(char *)((int)piVar2 + 0x197) == 'T' && ((char)piVar2[0x66] == '\0')) &&
          (*(char *)((int)piVar2 + 0x199) == '\0')))) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      pbVar4 = (byte *)(unaff_EBP + -0x24);
      do {
        if (*(int *)(unaff_EBP + -0x10) == 0) goto LAB_0056a55e;
        if (*pbVar4 < *pbVar5) break;
        if (*pbVar5 < *pbVar4) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
        }
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while ((int)(pbVar5 + (-0x194 - (int)piVar2)) < 6);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        *(int *)(unaff_EBP + -0x24) = piVar2[0x65];
        *(short *)(unaff_EBP + -0x20) = (short)piVar2[0x66];
      }
    }
LAB_0056a55e:
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      GetWindowsDirectoryA((LPSTR)(unaff_EBP + -0x234),0x200);
      *(undefined1 *)(unaff_EBP + -0x231) = 0;
      BVar3 = GetVolumeInformationA
                        ((LPCSTR)(unaff_EBP + -0x234),(LPSTR)(unaff_EBP + -0x634),0x200,
                         (LPDWORD)(unaff_EBP + -0x2c),(LPDWORD)(unaff_EBP + -0x30),
                         (LPDWORD)(unaff_EBP + -0x34),(LPSTR)(unaff_EBP + -0x434),0x200);
      if (BVar3 == 1) {
        *(undefined4 *)(unaff_EBP + -0x1e) = *(undefined4 *)(unaff_EBP + -0x2c);
      }
      FUN_00434e21(unaff_EBP + -0x14,s__02X_02X_02X_02X_02X_02X__02X_02_00965760,
                   *(undefined1 *)(unaff_EBP + -0x24),*(undefined1 *)(unaff_EBP + -0x23),
                   *(undefined1 *)(unaff_EBP + -0x22),*(undefined1 *)(unaff_EBP + -0x21),
                   *(undefined1 *)(unaff_EBP + -0x20),*(undefined1 *)(unaff_EBP + -0x1f),
                   *(undefined1 *)(unaff_EBP + -0x1e),*(undefined1 *)(unaff_EBP + -0x1d),
                   *(undefined1 *)(unaff_EBP + -0x1c),*(undefined1 *)(unaff_EBP + -0x1b));
      FUN_00414f8b(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  } while( true );
}


