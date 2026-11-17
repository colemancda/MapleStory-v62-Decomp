/* FUN_007a3fab - 0x007a3fab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_007a3fab(void)

{
  int iVar1;
  int *extraout_ECX;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  int *piVar4;
  
  FUN_00879bb8();
  piVar3 = *(int **)(unaff_EBP + 8);
  iVar2 = *piVar3;
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  extraout_ECX[1] = piVar3[1];
  extraout_ECX[2] = piVar3[2];
  extraout_ECX[3] = piVar3[3];
  extraout_ECX[4] = piVar3[4];
  extraout_ECX[5] = piVar3[5];
  extraout_ECX[6] = piVar3[6];
  extraout_ECX[7] = piVar3[7];
  extraout_ECX[8] = piVar3[8];
  extraout_ECX[9] = piVar3[9];
  extraout_ECX[10] = piVar3[10];
  extraout_ECX[0xb] = piVar3[0xb];
  extraout_ECX[0xc] = piVar3[0xc];
  extraout_ECX[0xd] = piVar3[0xd];
  extraout_ECX[0xe] = piVar3[0xe];
  extraout_ECX[0xf] = piVar3[0xf];
  extraout_ECX[0x10] = piVar3[0x10];
  extraout_ECX[0x11] = piVar3[0x11];
  extraout_ECX[0x12] = piVar3[0x12];
  extraout_ECX[0x13] = piVar3[0x13];
  extraout_ECX[0x14] = piVar3[0x14];
  extraout_ECX[0x15] = piVar3[0x15];
  extraout_ECX[0x16] = piVar3[0x16];
  extraout_ECX[0x17] = piVar3[0x17];
  extraout_ECX[0x18] = piVar3[0x18];
  extraout_ECX[0x19] = piVar3[0x19];
  extraout_ECX[0x1a] = piVar3[0x1a];
  extraout_ECX[0x1b] = piVar3[0x1b];
  extraout_ECX[0x1c] = piVar3[0x1c];
  extraout_ECX[0x1d] = piVar3[0x1d];
  extraout_ECX[0x1e] = piVar3[0x1e];
  extraout_ECX[0x1f] = piVar3[0x1f];
  extraout_ECX[0x20] = piVar3[0x20];
  iVar2 = piVar3[0x21];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x21] = iVar2;
  extraout_ECX[0x22] = piVar3[0x22];
  extraout_ECX[0x23] = piVar3[0x23];
  extraout_ECX[0x24] = piVar3[0x24];
  extraout_ECX[0x25] = piVar3[0x25];
  extraout_ECX[0x26] = piVar3[0x26];
  extraout_ECX[0x27] = piVar3[0x27];
  extraout_ECX[0x28] = piVar3[0x28];
  extraout_ECX[0x29] = piVar3[0x29];
  extraout_ECX[0x2a] = piVar3[0x2a];
  extraout_ECX[0x2b] = piVar3[0x2b];
  extraout_ECX[0x2c] = piVar3[0x2c];
  extraout_ECX[0x2d] = piVar3[0x2d];
  extraout_ECX[0x2e] = piVar3[0x2e];
  extraout_ECX[0x2f] = piVar3[0x2f];
  extraout_ECX[0x30] = piVar3[0x30];
  extraout_ECX[0x31] = piVar3[0x31];
  extraout_ECX[0x32] = piVar3[0x32];
  extraout_ECX[0x33] = piVar3[0x33];
  extraout_ECX[0x34] = piVar3[0x34];
  extraout_ECX[0x35] = piVar3[0x35];
  extraout_ECX[0x36] = piVar3[0x36];
  extraout_ECX[0x37] = piVar3[0x37];
  extraout_ECX[0x38] = piVar3[0x38];
  extraout_ECX[0x39] = piVar3[0x39];
  extraout_ECX[0x3a] = piVar3[0x3a];
  extraout_ECX[0x3b] = piVar3[0x3b];
  extraout_ECX[0x3c] = piVar3[0x3c];
  extraout_ECX[0x3d] = piVar3[0x3d];
  extraout_ECX[0x3e] = piVar3[0x3e];
  extraout_ECX[0x3f] = piVar3[0x3f];
  extraout_ECX[0x40] = piVar3[0x40];
  extraout_ECX[0x41] = piVar3[0x41];
  extraout_ECX[0x42] = piVar3[0x42];
  extraout_ECX[0x43] = piVar3[0x43];
  extraout_ECX[0x44] = piVar3[0x44];
  extraout_ECX[0x45] = piVar3[0x45];
  extraout_ECX[0x46] = piVar3[0x46];
  extraout_ECX[0x47] = piVar3[0x47];
  extraout_ECX[0x48] = piVar3[0x48];
  extraout_ECX[0x49] = piVar3[0x49];
  extraout_ECX[0x4a] = piVar3[0x4a];
  extraout_ECX[0x4b] = piVar3[0x4b];
  extraout_ECX[0x4c] = piVar3[0x4c];
  extraout_ECX[0x4d] = piVar3[0x4d];
  extraout_ECX[0x4e] = piVar3[0x4e];
  extraout_ECX[0x4f] = piVar3[0x4f];
  extraout_ECX[0x50] = piVar3[0x50];
  extraout_ECX[0x51] = piVar3[0x51];
  extraout_ECX[0x52] = piVar3[0x52];
  extraout_ECX[0x53] = piVar3[0x53];
  extraout_ECX[0x54] = piVar3[0x54];
  extraout_ECX[0x55] = piVar3[0x55];
  extraout_ECX[0x56] = piVar3[0x56];
  extraout_ECX[0x57] = piVar3[0x57];
  extraout_ECX[0x58] = piVar3[0x58];
  extraout_ECX[0x59] = piVar3[0x59];
  extraout_ECX[0x5a] = piVar3[0x5a];
  piVar3 = piVar3 + 0x5b;
  piVar4 = extraout_ECX + 0x5b;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  extraout_ECX[0x67] = *(int *)(iVar2 + 0x19c);
  extraout_ECX[0x68] = *(int *)(iVar2 + 0x1a0);
  extraout_ECX[0x69] = *(int *)(iVar2 + 0x1a4);
  iVar1 = *(int *)(iVar2 + 0x1a8);
  extraout_ECX[0x6a] = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  extraout_ECX[0x6b] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007b4b60(iVar2 + 0x1ac);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0x6c] = *(int *)(iVar2 + 0x1b0);
  extraout_ECX[0x6d] = *(int *)(iVar2 + 0x1b4);
  extraout_ECX[0x6e] = *(int *)(iVar2 + 0x1b8);
  extraout_ECX[0x6f] = *(int *)(iVar2 + 0x1bc);
  extraout_ECX[0x70] = *(int *)(iVar2 + 0x1c0);
  extraout_ECX[0x71] = *(int *)(iVar2 + 0x1c4);
  extraout_ECX[0x72] = *(int *)(iVar2 + 0x1c8);
  return extraout_ECX;
}


